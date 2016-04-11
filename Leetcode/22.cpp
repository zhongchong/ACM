class Solution {
public:
    void backTrack(int m, int n, string &str, vector<string> &str_vec) 
    {
        if( n == 0 && m==0)
            str_vec.push_back(str);
        string tmp = str;
        if( m > 0)
        {
            str += ")";
            backTrack(m-1, n, str, str_vec);
            str = tmp;
        }
        if( n > 0)
        {
            str += "(";
            backTrack(m+1,n-1,str,str_vec);
            str=tmp;
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> vec;
        string str;
        backTrack(0,n,str,vec);
        return vec;
    }
};