////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2014-07-08 16:59:19
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 2052
////Problem Title: 
////Run result: Accept
////Run time:0MS
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
  

    int m,n;
    while(scanf("%d%d",&n,&m) != EOF)
    {
        for(int i=0;i<m+2;++i)
        {
            if(i == 0 || i == m+1)
                print1(n);
            else
                print2(n);
        }
        cout<<endl;
    }


    return 0;
}
