class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profile = 0;
        for(size_t i=1; i<prices.size(); ++i)
        {
            if(prices.at(i) > prices.at(i-1))
                profile += prices.at(i) - prices.at(i-1);
        }
        return profile;
    }
};