////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-03-12 14:57:32
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2012
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:280KB
//////////////////System Comment End//////////////////
// acm.cpp : Defines the entry point for the console application.
//
///*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int data[100];

int check(int m)
{
	int i;
	if(m < 2)
		return 0;
	for(i=2;i<=(int)sqrt((double)m)+1;i++)
		if(m%i == 0)
			return 0;
	return 1;
}

int main()
{
	int x,y,i,N=0,flag=1;
#ifndef ONLINE_JUDGE
	freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
#endif
	i=-39;
	while(i<=50)
	{
		data[i+39]=check(i*i+i+41);
		//printf("%d ",i*i+i+41);
		i++;
	}
	while(scanf("%d%d",&x,&y) != EOF)
	{
		flag=1;
		if(x ==0 && y == 0)
			continue;
		for(i=x+39;i<=y+39;i++)
			if(data[i] == 0)
			{
				printf("Sorry\n");
				flag=0;
				break;
			}
		if(flag)
			printf("OK\n");
	}
#ifndef ONLINE_JUDGE
	fclose(stdin);
	//fclose(stdout);
#endif
	return 0;
}
//*/