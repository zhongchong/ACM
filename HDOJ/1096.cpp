////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2014-09-07 11:50:28
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 1096
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


    int N=0;
    cin>>N;
    while(N--)
    {
        int num=0, sum=0, temp=0;
        cin>>num;
        while(num--)
        {
            cin>>temp;
            sum+=temp;
        }
        if(N)
            cout<<sum<<endl<<endl;
        else
            cout<<sum<<endl;
    }


    return 0;
}
