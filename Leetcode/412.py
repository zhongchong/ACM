class Solution(object):
    def fizzBuzz(self, n):
        """
        :type n: int
        :rtype: List[str]
        """
        result = []
        for i in range(n):
            a = (i+1)%3
            b = (i+1)%5
            if a==0 and b==0:
                result.append('FizzBuzz')
            elif a==0:
                result.append('Fizz')
            elif b==0:
                result.append('Buzz')
            else:
                result.append(str(i+1))
        return result
                
