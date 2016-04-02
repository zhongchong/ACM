class Solution {
public:
    int romanToInt(string s) {
        map<char,int> r2i = { {'I',1}, {'V',5}, {'X',10}, {'L',50}, {'C',100}, {'D',500}, {'M',1000} };
        int res=0;
        for(int i=0; i<static_cast<int>( s.size() ); ++i)
        {
            if( i ==0 )
                res+= r2i.find( s.at(i) )->second;
            else
            {
                if( r2i.find( s.at(i) )->second > r2i.find( s.at(i-1) )->second)
                    res += r2i.find( s.at(i) )->second - 2* r2i.find( s.at(i-1) )->second;
                else
                    res += r2i.find(s.at(i))->second;
            }
        }
        return res;
    }
};