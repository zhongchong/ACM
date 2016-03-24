class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> nums_set;
        for( auto i : nums)
        {
            auto check = nums_set.find(i);
            if( check == nums_set.end())
                nums_set.insert(i);
            else
                return true;
        }
        return false;
    }
};