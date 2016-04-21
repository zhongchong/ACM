class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> loop_chk;
        loop_chk.insert(n);
        while( n!= 1 )
        {
            int sum=0;
            while(n)
            {
                int tmp = n%10;
                n /= 10;
                sum += tmp * tmp;
            }
            n = sum;
            if( loop_chk.find(n) == loop_chk.end() )
                loop_chk.insert(n);
            else
                break;
        }
        if( n == 1)
            return 1;
        else
            return 0;
    }
};