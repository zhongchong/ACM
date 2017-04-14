class Solution(object):
    def nextGreaterElement(self, findNums, nums):
        """
        :type findNums: List[int]
        :type nums: List[int]
        :rtype: List[int]
        """
        nums_dict = {}
        nums_stack = []
        for i in nums[::-1]:
            while any(nums_stack) and nums_stack[-1]<i:
                nums_stack.pop()
            if any(nums_stack):
                nums_dict[i]=nums_stack[-1]
            else:
                nums_dict[i]=-1
            nums_stack.append(i)
        result = []
        for i in findNums:
            result.append(nums_dict[i])
        return result
