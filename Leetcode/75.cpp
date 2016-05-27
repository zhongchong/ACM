class Solution {
public:
    void sort(int left, int right, vector<int> &nums)
    {
        if(left>=right)
            return;
        if(nums[left]>nums[right])
            swap(nums[left],nums[right]);
        int l=left+1, r=right-1, index=left+1;
        int pivotL=left, pivotR=right;
        while(index<=r)
        {
            if(nums[index]<nums[pivotL])
                swap(nums[index++],nums[l++]);
            else if(nums[index]>nums[pivotR])
                swap(nums[index],nums[r--]);
            else
                ++index;
        }
        swap(nums[pivotL],nums[--l]);
        swap(nums[pivotR],nums[++r]);
        sort(left,l-1,nums);
        sort(l+1,r-1,nums);
        sort(r+1,right,nums);
    }
    void sortColors(vector<int>& nums) {
        if(nums.size()<=0)
            return;
        sort(0,nums.size()-1,nums);
    }
};