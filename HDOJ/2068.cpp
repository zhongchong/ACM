////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-05-10 09:25:24
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2068
////Problem Title: 
////Run result: Accept
////Run time:15MS
////Run memory:268KB
//////////////////System Comment End//////////////////
// acm.cpp : Defines the entry point for the console application.

#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>

__int64 data[27];

using namespace std;

__int64 C(__int64 m,__int64 n)
{
	__int64 res=1;
	if(m-n < n)
		n=m-n;
	for(__int64 i=0;i<n;++i)
	{
		res*=(m-i);
		res/=(i+1);
	}
	return res;
}

int main()
{
	__int64 n,res;
#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
#endif
	data[0]=0;
	data[1]=0;
	data[2]=1;
	for(__int64 i=3;i<=15;++i)
		data[i]=(i-1)*( data[i-1]+data[i-2] );
	while(scanf("%I64d",&n) , n!=0)
	{
		res=1;
		for(__int64 i=2;i<=n/2;++i)
			res=res +  C(n,i)*data[i];
		printf("%I64d\n",res);
	}
#ifndef ONLINE_JUDGE
    fclose(stdin);
    //fclose(stdout);
#endif
    return 0;
}
