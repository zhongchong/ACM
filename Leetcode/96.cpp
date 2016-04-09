class Solution {
public:
    int numTrees(int n) {
        vector<int> counts(n+1,1);
        for( int i=2; i<=n; ++i)
        {
            counts.at(i)=0;
            for( int j=0; j<i; ++j)
                counts.at(i) += counts.at(j) * counts.at(i-j-1);
        }
        return counts.at(n);
    }
};