////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-03-08 20:00:47
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 1713
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:268KB
//////////////////System Comment End//////////////////
// acm.cpp : Defines the entry point for the console application.
//
///*
#include<stdio.h>
#include<stdlib.h>

int gcd(int a,int b)
{
	return b==0?a:gcd(b,a%b);
}

int main()
{
	int N;
	int a,b,c,d,t;
#ifndef ONLINE_JUDGE
	freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
#endif
	scanf("%d",&N);
	while(N--)
	{
		scanf("%d/%d",&a,&b);
		scanf("%d/%d",&c,&d);
		t=gcd(a,b);
		a/=t;b/=t;
		t=gcd(c,d);
		c/=t;d/=t;
		if(gcd(b,d) == 1)
			printf("%d\n",a/gcd(a,c)*c);
		else
			printf("%d/%d\n",a/gcd(a,c)*c,gcd(b,d));
	}

#ifndef ONLINE_JUDGE
	fclose(stdin);
	//fclose(stdout);
#endif
	return 0;
}
//*/
