////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2014-07-19 20:42:17
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2055
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:288KB
//////////////////System Comment End//////////////////
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
#include<cmath>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        char ch;
        int x,y;
        cin>>ch>>y;
        if(ch >= 'a' && ch <= 'z')
            x = 0 - (ch - 'a' + 1);
        else
            x = ch - 'A' + 1;
        cout<<x+y<<endl;
    }
    return 0;
}
