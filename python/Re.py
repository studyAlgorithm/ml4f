#-*- coding: utf-8 -*-

import os
import time

input("pause")

wordCountMap = {}

def wordCount(word):
    
    for c in word:
        count = wordCountMap.get(c, 0)
        wordCountMap[c] = count + 1

def searchAABB(filePath):
    lines = open(filePath.decode('utf8').encode('gbk'))
    for line in lines:
        print(line)
        #TODO 正则匹配
        wordCount(line)
    lines.close()
  
def traverse(f):  
    fs = os.listdir(f)  
    for f1 in fs:  
        tmp_path = f + u'/' + f1
        print(tmp_path)
        if not os.path.isdir(tmp_path):  
            print(tmp_path)
            searchAABB(tmp_path)  
        else:  
            traverse(tmp_path)  
              
path = u'C:/Users/paike/Desktop/文件'
print path
traverse(path)

for key in wordCountMap.iterkeys():
    print key, ':', wordCountMap[key]
    
input('pause')
