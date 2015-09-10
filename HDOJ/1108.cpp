////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-03-11 17:35:30
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 1108
////Problem Title: 
////Run result: Accept
////Run time:15MS
////Run memory:268KB
//////////////////System Comment End//////////////////
// acm.cpp : Defines the entry point for the console application.
//
///*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

_int64 gcd(_int64 a,_int64 b)
{
	return b==0?a:gcd(b,a%b);
}

int main()
{
	_int64 a,b;
#ifndef ONLINE_JUDGE
	freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
#endif
	while(scanf("%I64d%I64d",&a,&b) != EOF)
	{
		printf("%I64d\n",a/gcd(a,b)*b);
	}
#ifndef ONLINE_JUDGE
	fclose(stdin);
	//fclose(stdout);
#endif
	return 0;
}
//*/