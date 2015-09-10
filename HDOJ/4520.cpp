////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-03-27 18:19:23
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 4520
////Problem Title: 
////Run result: Accept
////Run time:15MS
////Run memory:244KB
//////////////////System Comment End//////////////////
// acm.cpp : Defines the entry point for the console application.
//
///*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int comp(const void*a,const void*b)
{
	double m=*(double*)a-*(double*)b;
	if(m > 0)
		return 1;
	else if(m < 0)
		return -1;
	else
		return 0;
}

int main()
{
	int N;
	double data[20][2];
	double av,min,right;
#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
#endif
	
	while(scanf("%d",&N),N!=0)
	{
		av=0;
		for(int i=0;i<N;i++)
		{
			scanf("%lf",&data[i][0]);
			data[i][1]=i;
		}
		qsort(data,N,sizeof(double)*2,comp);
		//for(int i=0;i<N;i++)
		//	printf("%.3lf\n",data[i]);
		for(int i=1;i<N-1;i++)
			av+=data[i][0];
		av/=(N-2);
		min=fabs(data[1][0]-av);
		right=data[1][1];
		for(int i=2;i<N-1;i++)
		{
			if( fabs(data[i][0] - av) < min)
			{
				right=data[i][1];
				min=fabs(data[i][0]-av);
			}
			else if(fabs(data[i][0] - av) == min && data[i][1] < right)
			{
				right=data[i][1];
				min=fabs(data[i][0]-av);
			}
		}
		printf("%d\n",(int)right+1);
	}

#ifndef ONLINE_JUDGE
    fclose(stdin);
    //fclose(stdout);
#endif
    return 0;
}
//*/