class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() <= 0)
            return 0;
        vector<int> profit(prices.size(),0);
        int max_tmp = -prices.at(0);
        for(int i=1; i<(int)prices.size(); ++i)
        {
            profit.at(i) = max(profit.at(i-1), prices.at(i) + max_tmp);
            if( i-2 >= 0 )
                max_tmp = max(max_tmp, profit.at(i-2) - prices.at(i) );
            else
                max_tmp = max(max_tmp, -prices.at(i) );
        }
        return profit.back();
    }
};