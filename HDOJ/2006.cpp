////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-03-12 14:07:02
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2006
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
#include<string.h>
#include<math.h>

int data[100];

int main()
{
	int i,result=1;
#ifndef ONLINE_JUDGE
	freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
#endif
	while(scanf("%d",&data[0]) != EOF)
	{
		result=1;
		for(i=1;i<=data[0];i++)
		{
			scanf("%d",&data[i]);
			if(data[i] % 2 != 0)
				result*=data[i];
		}
		printf("%d\n",result);
	}
#ifndef ONLINE_JUDGE
	fclose(stdin);
	//fclose(stdout);
#endif
	return 0;
}
//*/