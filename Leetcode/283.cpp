class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zeroPos = 0;
        for(int i = 0; i < nums.size(); ++i)
        {
            if(nums.at(i) != 0 )
            {
                if(i != zeroPos)
                    swap(nums.at(i), nums.at(zeroPos) );
                ++zeroPos;
            }
        }
    }
};

