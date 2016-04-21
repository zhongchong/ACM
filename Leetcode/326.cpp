class Solution {
public:
    bool isPowerOfThree(int n) {
        if( n <= 0)
            return false;
        double m = round( log(n) / log(3) );
        m = pow(3, m);
        if( fabs( static_cast<double>(n) - m ) <= 1e-9)
            return true;
        return false;
    }
};