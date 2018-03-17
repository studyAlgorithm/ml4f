import sys

def searchAABB(filePath):
    lines = open(filePath)
    for line in lines:
        print line
        #TODO 正则匹配
  
def traverse(f):  
    fs = sys.listdir(f)  
    for f1 in fs:  
        tmp_path = sys.path.join(f,f1)  
        if not sys.path.isdir(tmp_path):  
            print('文件: %s'%tmp_path)
            searchAABB(tmp_path)  
        else:  
            traverse(tmp_path)  
              
 
traverse(sys.argv[1])
