import os
import sys


from langchain.chat_models import ChatOpenAI
sys.path.append(os.path.join(os.path.dirname(__file__), '../../..'))
from gpt_client.gpt_client.prompts.prompt_template import QA_TEMPLATE_BAICHUAN

class GPTAssistant:
    def __init__(self, verbose=False):
        llm = QianwenChat(
            model="gpt-3.5-turbo",
            temperature=0.1,
            max_tokens=2048,
            verbose=verbose
        )
        self.llm = llm
        
        
        
    def ask(self, question):
        logging.info(f"Sending question to LLM: {question}")
        try:
            prompt = QA_TEMPLATE_BAICHUAN.format(
                context="",   # 不用 RAG，留空
                question=question
            )
            response = self.llm.invoke(prompt)
            return response.content
        except Exception as e:
            logging.error(f"Error LLM: {e}")
            return "请求出现问题！！！"

        
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
        
        
        
        
