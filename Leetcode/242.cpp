class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
            return false;
        vector<int> count(26,0);
        for( auto i : s)
        {
            ++count.at(i - 'a');
        }
        for( auto i : t)
        {
            --count.at(i - 'a');
        }
        for( auto i : count)
        {
            if( i )
                return false;
        }
        return true;
    }
};