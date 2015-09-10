////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-05-12 20:00:31
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2669
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:312KB
//////////////////System Comment End//////////////////
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>

using namespace std;

__int64 exgcd(__int64 a,__int64 b,__int64& m,__int64& n)
{
	if(0==b)
	{
		m=1;n=0;
		return a;
	}
	else
	{
		__int64 r=exgcd(b,a%b,m,n);
		__int64 t=m-a/b*n;
		m=n;
		n=t;
		return r;
	}
}

int main()
{
	__int64 a,b;
#ifndef ONLINE_JUDGE
	freopen("in.txt","r",stdin);
#endif
	while(scanf("%I64d%I64d",&a,&b) != EOF)
	{
		__int64 m=0,n=0,t=0;
		t=exgcd(a,b,m,n);
		if(t != 1)
		{
			cout<<"sorry"<<endl;
		}
		else
		{
			while(m < 0)
			{
				m=m+b;
				n=n-a;
			}
			printf("%I64d %I64d\n",m,n);
		}
	}
#ifndef ONLINE_JUDGE
	fclose(stdin);
#endif
	return 0;
}