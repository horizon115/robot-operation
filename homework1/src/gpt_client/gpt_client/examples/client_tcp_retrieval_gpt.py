import os
    
import sys
import logging
import socket


from langchain.chains import RetrievalQA
#from langchain_openai import ChatOpenAI

# 优先使用已安装的 langchain（0.2.x）中的类，兼容 pydantic 1.x
try:
    from langchain.chat_models import ChatOpenAI, AzureChatOpenAI
except Exception:
    # 回退（如果你确实安装了 langchain-openai 且环境允许）
    from langchain_openai import ChatOpenAI, AzureChatOpenAI



sys.path.append(os.path.join(os.path.dirname(__file__), '../../..'))
from gpt_client.gpt_client.prompts.prompt_template import QA_TEMPLATE_BAICHUAN
import gpt_client.gpt_client.commons.embedding_utils as eu
from gpt_client.gpt_client.commons.utils import *

logging.basicConfig(level=logging.INFO)


class GPTAssistant:
    """ Load ChatGPT config and your custom pre-prompts. """

    def __init__(self, verbose=False) -> None:
        
        logging.info("Loading keys...")
        cfg_file = os.path.join(os.path.dirname(__file__), '../commons/config.json')
        set_global_configs(cfg_file)
        logging.info(f"Done.")

        logging.info("Initialize LLM...")
        #llm = ChatOpenAI(
        #    model="gpt-3.5-turbo",
        #    temperature=0.1,
        #    max_tokens=2048,
        #    callbacks=[],
        #    verbose=False
        #)
        llm = ChatOpenAI(
            openai_api_key="sk-69560487bc6049d88a3461f96bae2891",
            openai_api_base="https://dashscope.aliyuncs.com/compatible-mode/v1",
            model="qwen-plus",
            temperature=0.1,
            max_tokens=2048
        )
        logging.info(f"Done.")

        logging.info("Initialize tools...")
        embedding_model = eu.init_embedding_model()
        vector_store = eu.init_vector_store(embedding_model)
        logging.info(f"Done.")

        logging.info("Initialize chain...")
        chain_type_kwargs = {"prompt": QA_TEMPLATE_BAICHUAN, "verbose": verbose}
        self.conversation = RetrievalQA.from_chain_type(
            llm=llm,
            chain_type='stuff',
            retriever=vector_store.as_retriever(search_kwargs={'k': 3}),
            chain_type_kwargs=chain_type_kwargs,
            return_source_documents=True,
            callbacks=[],
            verbose=False
        )
        logging.info(f"Done.")

        os.system("clear")
        streaming_print_banner()

    def ask(self, question):
            logging.info(f"Sending question to LLM: {question}") # 添加调试日志
            try:
                # 确保传入的是正确定义的字典键 'query'
                result_dict = self.conversation.invoke({"query": question}) 
                result = result_dict['result']
                logging.info("LLM responded successfully.") # 添加调试日志
                return result
            except Exception as e:
                logging.error(f"Error LLM: {e}")
                return "请求出现问题！！！"



    #def ask(self, question):
     #   try:
      #      result_dict = self.conversation.invoke({"query": question})
       #     result = result_dict['result']
        #    return result
        #except Exception as e:
         #   logging.error(f"Error LLM: {e}")
          #  return "请求出现问题！！！"


def main(args=None):
    IS_DUBUG = False
    os.environ["TOKENIZERS_PARALLELISM"] = "false"
    gpt = GPTAssistant(
        verbose=False,
    )
    if not IS_DUBUG:
        HOST = 'localhost'
        PORT = 5001
        s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        s.connect((HOST, PORT))
        print("Connected to server.")

    while True:
        question = input(colors.YELLOW + "User💬> " + colors.ENDC)
        if question == "!quit" or question == "!exit":
            break
        if question == "!clear":
            os.system("clear")
            continue

        result = gpt.ask(question)  # Ask a question
        print(colors.GREEN + "Assistant🤖> " + colors.ENDC + f"{result}")
        
        if not IS_DUBUG:
            logging.info("Sending data to server...") # 添加调试日志
            s.sendall(result.encode())
            logging.info("Data sent.")


if __name__ == '__main__':
    main()
