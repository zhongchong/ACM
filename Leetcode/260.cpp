class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int tmp=0;
        for(auto i : nums)
        {   
            tmp ^= i;    
        }
        int mask = tmp & (-tmp);
        int a = 0, b = 0;
        for(auto i : nums)
        {
            if(mask & i)
                a ^= i;
            else
                b ^= i;
        }
        vector<int> res;
        res.push_back(a);
        res.push_back(b);
        return res;
    }
};