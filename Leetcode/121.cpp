class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<=0 )
            return 0;
        int low=prices.at(0);
        int maxProfit=0;
        for( auto i:prices )
        {
            if( i > low)
            {
                int profit = i - low;
                if(profit > maxProfit)
                    maxProfit = profit;
            }
            else
                low = i;
        }
        return maxProfit;
    }
};