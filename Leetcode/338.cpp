class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> res(num+1, 0);
        res.at(0) = 0;
        if( num>=1 )
            res.at(1) = 1;
        for(int i=1 ; i<=num/2; ++i)
        {
            res.at(i*2) = res.at(i);
            if(i*2+1 <= num)
                res.at(i*2+1) = res.at(i)+1;
        }
        return res;
    }
};