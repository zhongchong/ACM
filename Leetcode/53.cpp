class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        assert( nums.size() > 0);
        int max=nums.at(0), cur=nums.at(0);
        for( int i=1; i<nums.size(); ++i )
        {
            if( cur > 0)
            {
                cur += nums.at(i);
                if( cur > max)
                    max=cur;
            }
            else
            {
                cur = nums.at(i);
                if( cur > max )
                    max=cur;
            }
        }
        return max;
    }
};