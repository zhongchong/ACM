////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2014-09-06 15:00:06
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 1092
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:400KB
//////////////////System Comment End//////////////////
#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>

using namespace std;

int main()
{
    int N, sum;
    while(scanf("%d",&N) != EOF)
    {
        sum=0;
        if(N == 0)
            continue;
        while(N--)
        {
            int temp=0;
            cin>>temp;
            sum+=temp;
        }
        cout<<sum<<endl;
    }

    return 0;
}
