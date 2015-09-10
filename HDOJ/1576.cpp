////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-05-11 20:05:40
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 1576
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:268KB
//////////////////System Comment End//////////////////
// acm.cpp : Defines the entry point for the console application.

#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>

__int64 exgcd(__int64 a,__int64 b,__int64& m,__int64& n)
{
	if(0==b)
	{
		m=1;n=0;
		return a;
	}
	else
	{
		exgcd(b,a%b,m,n);
		__int64 t=m-a/b*n;
		m=n;
		n=t;
	}
}

using namespace std;

int main()
{
	__int64 n,a,b;
#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
#endif
	scanf("%I64d",&n);
	while( n-- )
	{
		scanf("%I64d%I64d",&a,&b);
		__int64 m=1,n=0;
		exgcd(b,9973,m,n);
		__int64 x=a*m;
		if(x < 0)
			x=(x%9973+9973)%9973;
		printf("%I64d\n",x);
	}
#ifndef ONLINE_JUDGE
    fclose(stdin);
    //fclose(stdout);
#endif
    return 0;
}
