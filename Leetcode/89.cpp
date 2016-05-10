class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> res;
        if( n <=0 )
        {
            res.push_back(0);
            return res;
        }
        n = (1<<n);
        for( int i=0; i<n; ++i)
        {
            int gray = i ^ i>>1;
            res.push_back(gray);
        }
        return res;
    }
};