class Solution {
public:
    int integerBreak(int n) {
        if(n<=1)
            return n;
        if(n==2)
            return 1;
        if(n==3)
            return 2;
        int sum=1;
        while(n>4)
        {
            sum*=3;
            n-=3;
        }
        return sum*n;
    }
};