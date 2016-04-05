class Solution {
public:
    int hammingWeight(uint32_t n) {
        size_t num = n;
        int count=0;
        while( num )
        {
            num = num & (num -1);
            ++count;
        }
        return count;
    }
};