////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-03-08 10:55:25
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 1716
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:264KB
//////////////////System Comment End//////////////////
// acm.cpp : Defines the entry point for the console application.
//
///*
#include<stdio.h>
#include<stdlib.h>

int result[24],N;

bool check(int m,int N)
{
	for(int i=0;i<N;i++)
		if(result[i] == m)
			return true;
	return false;
}

void swap(int& a,int& b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}

void function(int data[],int n,int floor)
{
	int i=0,temp=0;
	if(floor == n)
	{
		temp=data[0]*1000+data[1]*100+data[2]*10+data[3];
		if(!check(temp,N))
		{
			result[N]=temp;
			N++;
		}
	}
	else
		for(i=floor;i<n;i++)
		{
			swap(data[floor],data[i]);
			function(data,n,floor+1);
			swap(data[floor],data[i]);
		}
}

int comp(const void* a,const void* b)
{
	return *(int*)a-*(int*)b;
}

void display()
{
	int m=-1,i;
	for(i=0;i<N;i++)
	{
		if(result[i] > 999)
		{
			if(m==-1)
			{
				m=result[i]/1000;
				printf("%d",result[i]);
			}
			else
			{
				if(result[i]/1000 != m)
				{
					printf("\n%d",result[i]);
					m=result[i]/1000;
				}
				else
					printf(" %d",result[i]);
			}
		}
	}
}

int main()
{
	int data[4],flag=0;
#ifndef ONLINE_JUDGE
	freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
#endif
	
	while(scanf("%d%d%d%d",&data[0],&data[1],&data[2],&data[3]), data[0] || data[1] || data[2] || data[3])
	{
		if(flag)
			printf("\n");
		qsort(data,4,sizeof(int),comp);
		N=0;
		function(data,4,0);
		qsort(result,N,sizeof(int),comp);
		display();
		printf("\n");
		flag=1;
	}
	
#ifndef ONLINE_JUDGE
	fclose(stdin);
	//fclose(stdout);
#endif
	return 0;
}
//*/