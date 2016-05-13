class Solution {
public:
    void backtracking(int i,int k,vector<int> &nums, vector<vector<int>> &vec)
    {
        if(i<k)
        {
            for(int j=i; j<k;++j)
            {
                swap(nums.at(i),nums.at(j));
                backtracking(i+1,k,nums,vec);
                swap(nums.at(i),nums.at(j));
            }
        }
        else
            vec.push_back(nums);
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> vec;
        backtracking(0,nums.size(),nums,vec);
        return vec;
    }
};