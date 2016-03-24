class Solution {
public:
    int titleToNumber(string s) {
        int res = 0, weight = 1;
        for( auto i = s.rbegin(); i != s.rend(); ++i)
        {   
            res += weight * ( *i - 'A' +1 );
            weight *= 26;
        }
        if(res < 0)
            return -1;
        return res;
    }
};