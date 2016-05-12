class Solution {
public:
    void backtracking(int k,int n,vector<int> &vec,vector<vector<int>> &vec1)
    {
        if( k>0 )
        {
            int i;
            vec.empty()?i=1:i=vec.back()+1;
            for( ;i<=n&&i<=9;++i)
            {
                vec.push_back(i);
                backtracking(k-1,n-i,vec,vec1);
                vec.pop_back();
            }
        }
        else if(k==0 && n==0)
        {
            vec1.push_back(vec);
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> vec1;
        vector<int> vec;
        backtracking(k,n,vec,vec1);
        return vec1;
    }
};