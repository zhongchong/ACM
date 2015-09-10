////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2014-09-07 11:44:25
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 1094
////Problem Title: 
////Run result: Accept
////Run time:15MS
////Run memory:400KB
//////////////////System Comment End//////////////////
#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>

using namespace std;

int main()
{

    int N;
    while(scanf("%d",&N) != EOF)
    {
        int sum=0, temp=0;
        while(N--)
        {
            cin>>temp;
            sum+=temp;
        }
        cout<<sum<<endl;
    }


    return 0;
}
