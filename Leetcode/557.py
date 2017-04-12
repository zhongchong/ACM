import re

class Solution(object):
    def reverseWords(self, s):
        slist = re.split(r'\s+',s)
        result = ''
        for i in range(len(slist)):
            slist[i] = slist[i][::-1]
        result += slist[0]
        for i in range(1,len(slist)):
            result += ' ' + slist[i]
        print result

