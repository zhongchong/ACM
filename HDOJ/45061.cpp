////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-03-28 11:44:35
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 4506
////Problem Title: 
////Run result: Accept
////Run time:46MS
////Run memory:304KB
//////////////////System Comment End//////////////////
// acm.cpp : Defines the entry point for the console application.
//
///*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

__int64 data[10000];
const __int64 mod=1000000007;

__int64 fastmi(__int64 a,__int64 b)
{
	__int64 temp;
	if(b<=0)
		return 1%mod;
	if(b==1)
		return a%mod;
	temp=fastmi(a,b/2);
	temp=(temp*temp)%mod;
	if( b&1)
		temp=(temp*a)%mod;
	return temp;
}

__int64 fastpower(__int64 a,__int64 b){
	__int64 sum=1;
	while(b){
		if(b&1)sum=(sum*a)%mod;
		a=(a*a)%mod;
		b>>=1;
	}
	return sum;
}

int main()
{
	__int64 T,n,t,k;
	__int64 temp,a;
#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
#endif
	scanf("%I64d",&T);
	while(T--)
	{
		scanf("%I64d%I64d%I64d",&n,&t,&k);
		temp=fastmi(k,t);
		for(int i=0;i<n;++i)
		{
			scanf("%I64d",&a);
			data[(i+t)%n]=(a*temp)%mod;
		}
		printf("%I64d",data[0]);
		for(int i=1;i<n;++i)
			printf(" %I64d",data[i]);
		printf("\n");

	}
#ifndef ONLINE_JUDGE
    fclose(stdin);
    //fclose(stdout);
#endif
    return 0;
}
