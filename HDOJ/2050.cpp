////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2014-07-08 16:38:19
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 2050
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:412KB
//////////////////System Comment End//////////////////
#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>

using namespace std;

int main()
{


    long long m[10001];
    memset(m,0,sizeof(m));
    m[1]=2;
    for(int i=2; i<=10000; ++i)
        m[i] = m[i-1] + 4*(i-1)+2-1;
    int N;
    cin>>N;
    while(N--)
    {
        int t;
        cin>>t;
        cout<<m[t]<<endl;
    }



    return 0;
}
