////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2014-07-08 17:24:58
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 2053
////Problem Title: 
////Run result: Accept
////Run time:93MS
////Run memory:328KB
//////////////////System Comment End//////////////////
#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>

using namespace std;

void print1(int len)
{
    cout<<"+";
    for(int i=0; i<len; ++i)
        cout<<"-";
    cout<<"+"<<endl;
}

void print2(int len)
{
    cout<<"|";
    for(int i=0; i<len; ++i)
        cout<<" ";
    cout<<"|"<<endl;
}

int main()
{


    int N;
    while(scanf("%d",&N) != EOF)
    {
        int count=0;
        for(int i=1; i<=N; ++i)
        {
            if(N%i == 0)
                ++count;
        }
        if(count & 1)
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
    }



    return 0;
}
