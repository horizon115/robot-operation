import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/lei/my_space/work/work1/gpt_ws/install/gpt_client'
