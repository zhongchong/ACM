import re

class Solution(object):
    def digest(self, str):
        x = re.split(r'[\+,i]+',str)
        x1 = int(x[0])
        x2 = int(x[1])
        return x1,x2
    
    def complexNumberMultiply(self, a, b):
        x1,x2 = self.digest(a)
        x3,x4 = self.digest(b)
        res1 = x1*x3-x2*x4
        res2 = x2*x3+x1*x4
        result = '%d+%di'%(res1,res2)
        return result
