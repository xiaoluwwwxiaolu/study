#coding=utf-8
import os
import re
import time
def dect_txupd():
    content=os.popen("ps -ef |grep test.py").read()
    res=re.search("([0-9]+?).*?python.*?test.py",content)
    if(res):
        pid=res.group(1)
        os.popen("kill "+pid)
        exit(0)

while(True):
    time.sleep(1)
    dect_txupd()

