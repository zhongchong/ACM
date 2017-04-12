class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
    	for(auto it=nums.begin(); it!= nums.end(); ++it)
    	{
    		res ^= *it;
    	}
    	return res;
    }
};

