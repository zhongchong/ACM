class Solution {
public:
    int climbStairs(int n) {
        vector<int> nums(n+1,0);
        nums.at(1) =1;
        nums.at(0) =1;
        for( int i=2; i<=n; ++i)
            nums.at(i) = nums.at(i-1) + nums.at(i-2);
        return nums.at(n);
    }
};