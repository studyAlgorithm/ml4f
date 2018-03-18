# -*- coding: utf-8 -*-
"""
Created on Sun Mar 18 10:37:30 2018

@author: paike
"""


import os

def searchAABB(filePath):
    lines = open(filePath)
    for line in lines:
        print(line)
        #TODO 正则匹配
  
def traverse(f):  
    print f
    fs = os.listdir(f)  
    for f1 in fs:
        print f
        print f1
        tmp_path = os.path.join(f,f1)
        print tmp_path
        if not os.path.isdir(tmp_path):  
            print('文件: %s'%tmp_path)
            searchAABB(tmp_path)  
        else:  
            traverse(tmp_path)  
              
path = 'C:\Users\paike\Desktop' + u'\文件'
traverse(path)