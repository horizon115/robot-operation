import os

# 尽量兼容不同版本的 langchain import API
try:
    from langchain.prompts.chat import ChatPromptTemplate
    from langchain.prompts.chat import SystemMessagePromptTemplate, HumanMessagePromptTemplate
    from langchain.prompts import PromptTemplate
except Exception:
    # 退回旧路径
    from langchain.prompts import ChatPromptTemplate
    from langchain.prompts import SystemMessagePromptTemplate, HumanMessagePromptTemplate
    from langchain.prompts import PromptTemplate


class PromptLoader:
    def __init__(self) -> None:
        self.dir_path = os.path.dirname(__file__)

    @property
    def pri_prompt(self) -> str:
        with open(os.path.join(self.dir_path, "primitives.txt"), encoding="utf-8") as f:
            return f.read()

    @property
    def sce_prompt(self) -> str:
        with open(os.path.join(self.dir_path, "scene.txt"), encoding="utf-8") as f:
            return f.read()

    @property
    def sys_prompt(self) -> str:
        with open(os.path.join(self.dir_path, "system.txt"), encoding="utf-8") as f:
            return f.read()
    
    @property
    def settings_prompt(self) -> str:
        with open(os.path.join(self.dir_path, "task_settings.txt"), encoding="utf-8") as f:
            return f.read()


_loader = PromptLoader()

# 组装 system 内容（明确约束：只输出 Python 代码，只能用给定函数，不要解释等）
_SYSTEM_BASE = f"""
{_loader.sys_prompt}

{_loader.sce_prompt}

{_loader.pri_prompt}

----------
Task settings:
{_loader.settings_prompt}
----------
Instructions for model:
- You are an assistant helping control a robot. When asked, output ONLY the Python code that uses the provided functions (like pri.gripper_ctrl, pri.move, pri.get_obj_pose, pri.reset_robot, pri.grab).
- Do NOT output explanations, analysis, or any additional text.
- Do NOT declare or define new helper functions; only call the given functions and use simple Python / numpy.
- If you don't know how to do the task, respond with a single short sentence: "I don't know".
- Units: meters. Use numpy arrays for positions and quaternions in the form np.array([w, x, y, z]) if needed.
"""

# SystemMessagePromptTemplate 用作 chat 模型的 system message
SYSTEM_MESSAGE = SystemMessagePromptTemplate.from_template(_SYSTEM_BASE)

# --------------------
# Memory / Conversation (Chat 风格)
# --------------------
# human message: 包含历史和当前输入
MEMORY_HUMAN_TEMPLATE = HumanMessagePromptTemplate.from_template(
    "Current conversation:\n{history}\n\nHuman: {input}\nYou:"
)

MEMORY_CONVERSATION_TEMPLATE = ChatPromptTemplate.from_messages(
    [SYSTEM_MESSAGE, MEMORY_HUMAN_TEMPLATE]
)

# 兼容旧的 PromptTemplate（如果上层使用的是非 chat 链）
_DEFAULT_MEMORY_CONVERSATION_TEMPLATE = """Current conversation:
{history}
Last line:
Human: {input}
You:"""

MEMORY_CONVERSATION_TEMPLATE_FALLBACK = PromptTemplate(
    input_variables=["history", "input"],
    template=_DEFAULT_MEMORY_CONVERSATION_TEMPLATE,
)

# --------------------
# QA Prompt (for RetrievalQA) — Chat 风格
# --------------------
# system instructs, human supplies context + question
QA_SYSTEM = SYSTEM_MESSAGE  # reuse the same system base

QA_HUMAN_TEMPLATE = HumanMessagePromptTemplate.from_template(
    "Context:\n{context}\n\nHuman: {question}\nYou:"
)

QA_CHAT_TEMPLATE = ChatPromptTemplate.from_messages([QA_SYSTEM, QA_HUMAN_TEMPLATE])

# 额外提供旧风格 PromptTemplate（兼容可能需要文本 prompt 的代码）
_DEFAULT_QA_TEMPLATE = """
Use the context below to answer the question. Output ONLY Python code (no explanations).

Context:
{context}

Human: {question}
You:
"""
QA_TEMPLATE = PromptTemplate(
    input_variables=["context", "question"],
    template=_DEFAULT_QA_TEMPLATE,
)

# 带聊天历史的 QA（旧风格）
_DEFAULT_QA_TEMPLATE_MEM = """
Use the context below and the chat history to answer the question. Output ONLY Python code (no explanations).

Context:
{context}

Chat history:
{chat_history}

Human: {question}
You:
"""
QA_MEM_TEMPLATE = PromptTemplate(
    input_variables=["context", "chat_history", "question"],
    template=_DEFAULT_QA_TEMPLATE_MEM,
)

# --------------------
# 特定模型兼容（保留，若你仍需兼容 Baichuan/Mistral/Zephyr 指令风格）
# 如果你将来改用非 chat 指令模型，可用这些模板
# --------------------
# Baichuan 指令式（原样保留为文本 PromptTemplate，供需要时切换）
_BAICHUAN_QA = _loader.pri_prompt + "{context}" + """
Use the above context to answer the user's question and perform the user's command.
-----------
Human: {question}
You:"""
QA_TEMPLATE_BAICHUAN = PromptTemplate(
    input_variables=["context", "question"],
    template=_BAICHUAN_QA
)

# Mistral 指令式保留（如果你用 Mistral 的原始指令格式可切换回来）
_MISTRAL_QA = "{context}\n\nHuman: {question}\nYou:"
QA_TEMPLATE_MISTRAL = PromptTemplate(
    input_variables=["context", "question"],
    template=_MISTRAL_QA
)

# Zephyr 风格（示例保留）
_ZEPHYR_QA = "<|system|>\n{context}\n\n<|user|>\n{question}\n\n<|assistant|>"
QA_TEMPLATE_ZEPHYR = PromptTemplate(
    input_variables=["context", "question"],
    template=_ZEPHYR_QA
)

# --------------------
# 便捷导出（供外部 import 使用）
# --------------------
__all__ = [
    "PromptLoader",
    "MEMORY_CONVERSATION_TEMPLATE",
    "MEMORY_CONVERSATION_TEMPLATE_FALLBACK",
    "QA_CHAT_TEMPLATE",
    "QA_TEMPLATE",
    "QA_MEM_TEMPLATE",
    "QA_TEMPLATE_BAICHUAN",
    "QA_TEMPLATE_MISTRAL",
    "QA_TEMPLATE_ZEPHYR",
    "SYSTEM_MESSAGE",
]
