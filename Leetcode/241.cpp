class Solution {
public:
    void calculate(int a,int b,char pos,int &res)
    {
        assert(pos=='+' || pos=='-' || pos=='*');
        switch(pos)
        {
            case '+':
                res=a+b;break;
            case '-':
                res=a-b;break;
            case '*':
                res=a*b;break;
        }
    }
    vector<int> diffWaysToCompute(string input) {
        vector<int> res;
        for(int i=0;i<input.size();++i)
            if(input[i]=='+' || input[i]=='-' || input[i]=='*')
            {
                vector<int> left=diffWaysToCompute( input.substr(0,i) );
                vector<int> right=diffWaysToCompute(input.substr(i+1));
                for(int j=0;j<left.size();++j)
                    for(int k=0;k<right.size();++k)
                    {
                        int tmp;
                        calculate(left[j],right[k],input[i],tmp);
                        res.push_back(tmp);
                    }
            }
        if(res.empty())
            res.push_back(atoi(input.c_str()));
        return res;
    }
};