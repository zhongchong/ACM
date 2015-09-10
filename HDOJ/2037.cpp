////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-03-13 16:27:01
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2037
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

int data[100][2];

int comp(const void*a,const void*b)
{
	return *( (int*)a+1 )-*( (int*)b+1 );
}

int main()
{
	int N,i,max,last;
#ifndef ONLINE_JUDGE
	freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
#endif
	while(scanf("%d",&N), N != 0 )
	{
		max=1;
		for(i=0;i<N;i++)
		{
			scanf("%d%d",&data[i][0],&data[i][1]);	
		}
		qsort(data,N,sizeof(int)*2,comp);
		/*
		for(i=0;i<N;i++)
		{
			printf("%d %d\n",data[i][0],data[i][1]);
		}
		*/
		last=data[0][1];
		for(i=1;i<N;i++)
		{
			if(data[i][0]>=last)
			{
				last=data[i][1];
				max++;
			}
		}
		printf("%d\n",max);
	}
#ifndef ONLINE_JUDGE
	fclose(stdin);
	//fclose(stdout);
#endif
	return 0;
}
//*/