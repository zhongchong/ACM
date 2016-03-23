class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size(), 1);
        for(int i = 1; i<nums.size(); ++i)
        {
            res.at(i) = res.at(i-1) * nums.at(i-1);
        }
        int right = 1;
        for(int i = nums.size() -1; i>=0; --i)
        {
            res.at(i) = right * res.at(i);
            right *= nums.at(i);
        }
        return res;
    }
};