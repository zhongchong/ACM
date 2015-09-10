////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-03-17 17:23:51
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2097
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:276KB
//////////////////System Comment End//////////////////
// acm.cpp : Defines the entry point for the console application.
//
///*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int f1(int m)
{
	int result=0;
	while(m!=0)
	{
		result+=(m%10);
		m/=10;
	}
	return result;
}

int f2(int m)
{
	int result=0;
	while(m!=0)
	{
		result+=(m%12);
		m/=12;
	}
	return result;
}

int f3(int m)
{
	int result=0;
	while(m!=0)
	{
		result+=(m%16);
		m/=16;
	}
	return result;
}

int main()
{
	int N,a,b,c;
#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
#endif
	
    while(scanf("%d",&N), N!=0)
    {
		a=f1(N);b=f2(N);c=f3(N);
		if(a==b && b==c)
			printf("%d is a Sky Number.\n",N);
		else
			printf("%d is not a Sky Number.\n",N);
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    //fclose(stdout);
#endif
    return 0;
}
//*/