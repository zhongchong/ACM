////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2014-07-07 18:16:57
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 2046
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


    long long m[51];
    memset(m,0,sizeof(m));
    m[1] = 1;
    m[2] = 2;
    for(int i=3; i<=50; ++i)
    {
        m[i] = m[i-1] + m[i-2];
    }
    int N;
    while(scanf("%d",&N) != EOF)
    {
        cout<<m[N]<<endl;
    }



    return 0;
}
