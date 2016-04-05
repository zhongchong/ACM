class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector<unsigned char> bitmap(32,0);
        int res=0;
        for( auto i : nums)
        {
            for(int j=0; j<32; ++j)
            {
                bitmap.at(j) += i>>j & 1;
                bitmap.at(j) %= 3;
            }
        }
        for(int j=0; j<32; ++j)
            if( bitmap.at(j) )
            res |= 1<<j;
        return res;
    }
};