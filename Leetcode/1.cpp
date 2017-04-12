class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        multimap<int,int> nums_map;
        for(unsigned int i=0; i < nums.size();++i)
        {
            nums_map.insert(make_pair(nums.at(i),i));
        }
        for(unsigned int i = 0; i < nums.size(); ++i)
        {
            int other = target-nums.at(i), pos = -1;
            auto check = nums_map.equal_range(other);
            for(auto j = check.first; j != check.second; ++j)
            {
                if((*j).second != i)
                    pos = j->second;
            }
            if(pos != -1)
            {
                res.push_back(i+1);
                res.push_back(pos+1);
                break;
            }
        }
        return res;
    }
};

