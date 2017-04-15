class Solution(object):
    def islandPerimeter(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        result = 0
        height = len(grid)
        width = len(grid[0])
        for i in range(height):
            for j in range(width):
                if grid[i][j]==1:
                    if not (j-1>=0 and grid[i][j-1]==1):
                        result += 1
                    if not (i-1>=0 and grid[i-1][j]==1):
                        result += 1
                    if not (i+1<height and grid[i+1][j]==1):
                        result += 1
                    if not (j+1<width and grid[i][j+1]==1):
                        result += 1
        return result
                    
