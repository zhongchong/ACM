#include<cstdlib>

class Solution {
public:
    int compareVersion(string version1, string version2) {
        int pos1 = 0, pos2 = 0;
        int val1 = 0, val2 = 0;
        while(!version1.empty() || !version2.empty())
        {
            val1 = val2 = 0;
            pos1 = version1.find(".");
            pos2 = version2.find(".");

            if(pos1 != version1.npos)
            {
                val1 = atoi(version1.substr(0,pos1).c_str() );
                version1 = version1.substr(pos1+1);
            }
            else
            {
                val1 = atoi(version1.c_str());
                version1.clear();
            }

            if(pos2 != version2.npos)
            {
                val2 = atoi(version2.substr(0,pos2).c_str());
                version2 = version2.substr(pos2+1);
            }
            else
            {
                val2 = atoi(version2.c_str());
                version2.clear();
            }

            if(val1 > val2)
                return 1;
            else if(val1 < val2)
                return -1;
        }
        return 0;
    }
};

