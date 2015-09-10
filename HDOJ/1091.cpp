////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2014-09-06 14:56:42
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 1091
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:384KB
//////////////////System Comment End//////////////////
#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>

using namespace std;

int main()
{

    long long a,b;
    while(scanf("%I64d%I64d",&a,&b) != EOF)
    {
        if(a==0 && b==0)
            continue;
        cout<<a+b<<endl;
    }

    return 0;
}
