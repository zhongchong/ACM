class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        if(n<=0)
            return {};
        vector<vector<int>> res(n, vector<int>(n,0) );
        int lx=0, ly=0, rx=n, ry=n;
        int cnt=0, limit=n*n, x=-1, y=-1;
        while(cnt<limit)
        {
            for(++lx,++x,++y; cnt<limit && y<ry; ++y)
                res[x][y]=++cnt;
            for(--ry,++x,--y; cnt<limit && x<rx; ++x)
                res[x][y]=++cnt;
            for(--x,--y,--rx; cnt<limit && y>=ly; --y)
                res[x][y]=++cnt;
            for(++y,--x,++ly;cnt<limit && x>=lx; --x)
                res[x][y]=++cnt;
        }
        return res;
    }
};