class Solution {
public:
    int majorityElement(vector<int>& nums) {
        stack<int> nums_stack;
        for( auto i : nums)
        {
            if( nums_stack.empty() || i == nums_stack.top())
                nums_stack.push( i );
            else
                nums_stack.pop();
        }
        return nums_stack.top();
    }
};
