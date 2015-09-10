////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2014-07-05 19:45:19
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 2044
////Problem Title: 
////Run result: Accept
////Run time:15MS
////Run memory:348KB
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
    m[1]=1;
    m[2]=1;
    for(int i=3; i<=50; ++i)
    {
        m[i] = m[i-1] + m[i-2];
    }
    int N;
    cin>>N;
    while(N--)
    {
        int a, b;
        a = b = 0;
        cin>>a>>b;
        if(a == b)
        {
            cout<<0<<endl;
            continue;
        }
        if(a == 1)
            cout<<m[b]<<endl;
        else
            cout<<m[b-a+1]<<endl;
    }


    
    return 0;
}
