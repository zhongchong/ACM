class Solution {
public:
    int maxProduct(vector<string>& words) {
        if( words.size() <= 1)
            return 0;
        size_t max_val = 0;
        size_t* bitmap = new size_t[words.size()];
        for( size_t i =0; i < words.size(); ++i)
        {
            size_t bit = 0;
            for( auto j : words.at(i) )
            {
                bit |= 1 << (j - 'a');
            }
            bitmap[i] = bit;
        }
        for( size_t i=0; i<words.size(); ++i)
        {
            for(size_t j=i+1; j<words.size(); ++j)
            {
                if( (bitmap[i] & bitmap[j]) == 0)
                {
                    size_t len = words.at(i).size() * words.at(j).size();
                    if( len > max_val)
                        max_val = len;
                }
            }
        }
        return max_val;
    }
};