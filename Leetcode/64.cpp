class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int len1=grid.size();
        assert(len1>0);
        int len2=grid[0].size();
        assert(len2>0);
        vector<vector<int>> res(len1, vector<int>(len2, INT32_MAX));
        const int step[2][2]={ {0,-1}, {-1,0} };
        res[0][0]=grid[0][0];
        for(int i=0; i<len1; ++i)
            for(int j=0; j<len2; ++j)
            {
                if(res[i][j] == INT32_MAX)
                {
                    for(int k=0; k<2; ++k)
                    {
                        int x=i+step[k][0];
                        int y=j+step[k][1];
                        if(x>=0 && x<len1 && y>=0 && y<len2 && res[x][y] != INT32_MAX)
                            if(res[x][y]+grid[i][j] < res[i][j])
                                res[i][j]=res[x][y]+grid[i][j];
                    }
                }
            }
        return res[len1-1][len2-1];
    }
};