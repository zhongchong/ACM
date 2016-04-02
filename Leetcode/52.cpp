class Solution {
public:
    void backtrack(int n, int m, vector<bool> &row_stat, vector<bool> &col_stat, 
                                vector<bool> &left_incline, vector<bool> &right_incline, int &count)
    {
        if( m < n)
        {
            for( int i=0; i<n; ++i)
            {
                if( row_stat.at(i)==0 && col_stat.at(m)==0 && left_incline.at(m-i+n-1)==0 && right_incline.at(m+i)==0)
                {
                    row_stat.at(i)=1;
                    col_stat.at(m)=1;
                    left_incline.at(m-i+n-1)=1;
                    right_incline.at(m+i)=1;
                    backtrack(n, m+1, row_stat, col_stat, left_incline, right_incline, count);
                    row_stat.at(i)=0;
                    col_stat.at(m)=0;
                    left_incline.at(m-i+n-1)=0;
                    right_incline.at(m+i)=0;
                }
            }
        }
        else
            ++count;
    }
    
    int totalNQueens(int n) {
        vector<bool> row_stat(n,0);
        vector<bool> col_stat(n,0);
        vector<bool> left_incline(2*n-1,0);
        vector<bool> right_incline(2*n-1,0);
        int count = 0;
        backtrack(n,0,row_stat,col_stat,left_incline,right_incline,count);
        return count;
    }
};