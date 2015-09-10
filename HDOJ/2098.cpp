////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-03-13 17:11:02
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2098
////Problem Title: 
////Run result: Accept
////Run time:140MS
////Run memory:280KB
//////////////////System Comment End//////////////////
// acm.cpp : Defines the entry point for the console application.
//
///*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int isPrime(int m)
{
	int i=0;
	if(m<2)
		return 0;
	for(i=2;i<=(int)sqrt((double)m);i++)
		if(m%i == 0)
			return 0;
	return 1;
}

int main()
{
	int n,i,num;
#ifndef ONLINE_JUDGE
	freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
#endif
	while(scanf("%d",&n), n != 0 )
	{
		num=0;
		for(int i=2;i<n/2;i++)
			if(isPrime(i) && isPrime(n-i))
				num++;
		printf("%d\n",num);
	}
#ifndef ONLINE_JUDGE
	fclose(stdin);
	//fclose(stdout);
#endif
	return 0;
}
//*/