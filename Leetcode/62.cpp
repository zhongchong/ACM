class Solution {
public:
    int uniquePaths(int m, int n) {
        --n;
        --m;
        if( m == 0 || n==0)
            return 1;
        if( m<0 || n<0)
            return -1;
        long long res = 1;
        if( m > n )
            swap( m, n );
        for( int i=1; i<=m; ++i )
        {
            res = res * (n+i) / i;
        }
        return res;
    }
};