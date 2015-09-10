////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-03-28 18:22:47
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 4524
////Problem Title: 
////Run result: Accept
////Run time:109MS
////Run memory:364KB
//////////////////System Comment End//////////////////
// acm.cpp : Defines the entry point for the console application.
//
///*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int data[1000000];

int main()
{
	int T,n;
	bool flag;
#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
#endif
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&n);
		for(int i=0;i<n;++i)
			scanf("%d",&data[i]);
		if(n == 1)
		{
			if(data[0] == 0)
				printf("yeah~ I escaped ^_^\n");
			else
				printf("I will never go out T_T\n");
			continue;
		}
		if(n == 2 )
		{
			if(data[0] == data[1])
				printf("yeah~ I escaped ^_^\n");
			else
				printf("I will never go out T_T\n");
			continue;
		}
		flag=true;
		for(int i=1;i<n-1;++i)
		{
			data[i]=data[i]-data[i-1];
			data[i-1]=0;
			if(data[i]<0)
			{
				flag=false;
				break;
			}
		}
		if(flag && data[n-2] == data[n-1])
			printf("yeah~ I escaped ^_^\n");
		else
			printf("I will never go out T_T\n");
	}

#ifndef ONLINE_JUDGE
    fclose(stdin);
    //fclose(stdout);
#endif
    return 0;
}
