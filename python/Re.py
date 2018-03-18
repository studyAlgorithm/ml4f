#-*- coding: utf-8 -*-

import os
import sys
import re

aabbList = []
ababList = []
wordCountMap = {}

def wordCount(word):
    for c in word:
        count = wordCountMap.get(c, 0)
        wordCountMap[c] = count + 1

def searchAABB(filePath):
    lines = open(filePath)
    for line in lines:
        #aabb
        r = r'(.)\1(.)\2
        b = re.findall(r, line)
        originB = [''.join(i[0]+i[0] + i[1] + i[1]) for i in b]
        if len(originB) > 0:
            print(originB)
            aabbList.append(originB)
            

        
        #統計漢字出現的次數
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
              
traverse(sys.argv[1])

wordCountList = []

for key, value in wordCountMap.items():
    wordCountTuple = (key, value)
    wordCountList.append(wordCountTuple)

def wordCountListSort(x, y):
	return cmp(x[1], y[1])

#sortedWordCountList = sorted(wordCountList, key = wordCountListSort)

wordCountList.sort(key=lambda x:(-x[1]))

    
