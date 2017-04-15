# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def findBottomLeftValue(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        queue = [root]
        result = None
        while any(queue):
            result = queue[0].val
            tmp = []
            for i in queue:
                if i.left != None:
                    tmp.append(i.left)
                if i.right != None:
                    tmp.append(i.right)
            queue = list(tmp)
        return result
