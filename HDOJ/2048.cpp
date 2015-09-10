////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2014-07-08 15:17:36
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 2048
////Problem Title: 
////Run result: Accept
////Run time:15MS
////Run memory:332KB
//////////////////System Comment End//////////////////
#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>

using namespace std;

int main()
{


    long long m[21], total[21];
    memset(m,0,sizeof(m));
    memset(total, 0, sizeof(total));
    m[2] = 1;
    total[2] = 2;
    m[3] = 2;
    total[3] = 6;
    for(int i=4; i<=20; ++i)
    {
        m[i] = (i-1)*(m[i-1]+m[i-2]);
        total[i] = i*total[i-1];
    }
    int N;
    cin>>N;
    while(N--)
    {
        int t=2;
        cin>>t;
        double res = (double)m[t]/(double)total[t];
        res*=100;
        printf("%.2lf%%\n",res);
    }


 
    return 0;
}
