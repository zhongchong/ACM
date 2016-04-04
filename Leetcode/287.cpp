class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int left=0, right=nums.size()-1, mid;
        while(left <= right)
        {
            mid = left + (right - left)/2;
            int count=0;
            for( int i=0 ; i<nums.size(); ++i)
                if( nums.at(i) <= mid)
                    ++count;
            if( count > mid)
                right = mid -1;
            else
                left = mid+1;
        }
        return left;
    }
};