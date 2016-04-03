class Solution {
public:
    string intToRoman(int num)
    {
        assert( num >0 && num<=3999 );
        string i2r[][10] = {
            {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"},
            { "", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC" },
            { "", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM" },
            { "", "M", "MM", "MMM", "", "", "", "", "", "" },
        };
        string res = i2r[3][num/1000] + i2r[2][num%1000/100] + i2r[1][num%100/10] + i2r[0][num%10];
        return res;
    }
};