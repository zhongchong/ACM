////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2014-10-23 17:00:30
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 2057
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:328KB
//////////////////System Comment End//////////////////
#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>

using namespace std;

long long hex2int(char m[])
{
    int len = strlen(m);
    long long res = 0;
    bool flag = false;
    if(m[0] == '-')
    {
        flag = true;
        m[0] = '0';
    }
    else if(m[0] == '+')
    {
        m[0] = '0';
    }

    for(int i = 0; i < len; ++i )
    {
        res <<= 4;
        if(m[i] >= '0' && m[i] <= '9')
        {
            res = res | (m[i] - '0');
        }
        else
        {
            res = res | (m[i] - 'A' + 10);
        }
    }
    if(flag)
        res *= -1;
    return res;
}

void int2hex(long long m)
{
    char ch[20];
    int len = 0;
    memset(ch,0,sizeof(ch));
    if(m == 0)
    {
        cout<<"0"<<endl;
        return;
    }
    if(m < 0)
    {
        cout<<"-";
        m *= -1;
    }
    while(m)
    {
        int s = m & 0xF;
        if(s >=0 && s <= 9)
            ch[len]=(char)('0'+s);
        else
            ch[len]=(char)(s-10+'A');
        m >>= 4;
        ++len;
    }
    for(int i=len-1;i>=0;--i)
        cout<<ch[i];
    cout<<endl;
}

int main()
{

    char a[20],b[20];
    long long A,B;
    A=B=0;
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    while(scanf("%s %s",a,b) != EOF)
    {
        A = hex2int(a);
        B = hex2int(b);
        int2hex(A+B);
    }


    return 0;
}
