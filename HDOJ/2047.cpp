////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2014-07-07 19:21:28
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 2047
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:336KB
//////////////////System Comment End//////////////////
#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>

using namespace std;

int main()
{


    long long m[41][2];
    memset(m,0,sizeof(m));
    m[1][0] = 1;
    m[1][1] = 2;
    for(int i=2; i<=40; ++i)
    {
        m[i][0] = m[i-1][1];
        m[i][1] = ( m[i-1][0] + m[i-1][1] ) * 2;
    }
    int N;
    while(scanf("%d",&N) != EOF)
    {
        cout<<m[N][0]+m[N][1]<<endl;
    }


 
    return 0;
}
