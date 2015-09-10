////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2014-07-03 17:15:36
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 2042
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:340KB
//////////////////System Comment End//////////////////
#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>

using namespace std;

int main()
{
   

    long long m[31];
    memset(m,0,sizeof(m));
    m[0]=3;
    for(int i=1; i<=30; ++i)
    {
        m[i] = (m[i-1]-1)*2;
    }
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
