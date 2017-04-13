class Solution(object):
    def countBattleships(self, board):
        """
        :type board: List[List[str]]
        :rtype: int
        """
        count = 0
        for i in range(len(board)):
            for j in range(len(board[i])):
                if board[i][j]=='X' and (i==0 or board[i-1][j]=='.') and (j==0 or board[i][j-1]=='.'):
                    count += 1
        return count
