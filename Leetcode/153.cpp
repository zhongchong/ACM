class Solution {
public:
    int findMin(vector<int>& nums) {
        assert( nums.size()>0 );
        int left=0, right=nums.size()-1;
        while( left < right )
        {
            int mid = left + (right - left)/2;
            if( nums.at(mid) >= nums.at(right) )
                left = mid+1;
            else
                right = mid;
        }
        return nums.at(left);
    }
};