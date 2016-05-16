class Solution {
public:
    string reverseVowels(string s) {
        vector<char> vows;
        set<char> vow={'a','e','i','o','u','A','E','I','O','U'};
        for(auto i=s.begin(); i!=s.end(); ++i)
        {
            if( vow.find(*i)!=vow.end() )
                vows.push_back(*i);
        }
        for(auto i=s.begin(); i!=s.end(); ++i)
        {
            if( vow.find(*i)!=vow.end() )
            {
                *i=vows.back();
                vows.pop_back();
            }
        }
        return s;
    }
};