class Solution(object):
    def findComplement(self, num):
        weight = 1
        result = 0
        while num:
            if num&1==0:
                result += weight
            weight = weight<<1
            num = num>>1
        return result
