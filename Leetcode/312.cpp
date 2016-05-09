class Solution {
public:
    int maxCoins(vector<int>& nums) {
        int sum=0;
        nums.insert( nums.begin(), 1);
        nums.push_back( 1 );
        
        const int len = nums.size();
        int **dp = new int*[len];
        for( int i=0; i<len; ++i)
            dp[i] = new int[len];
        for(int i=0;i<len;++i)
            for(int j=0;j<len;++j)
                dp[i][j]=0;
        
        int l,m,k;
        for( k=2; k<len; ++k)
        {
            for( l=0; l<len-k; ++l)
            {
                for( m=l+1; m<l+k; ++m)
                    dp[l][l+k] = max(dp[l][l+k], nums.at(l)*nums.at(m)*nums.at(l+k)+dp[l][m] + dp[m][l+k]);
            }
        }
        sum = dp[0][len-1];
        
        for(int i=0;i<len;++i)
            delete[] dp[i];
        delete[] dp;
        
        return sum;
    }
};