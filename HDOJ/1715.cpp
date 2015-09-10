////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-03-07 15:07:22
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 1715
////Problem Title: 
////Run result: Accept
////Run time:15MS
////Run memory:400KB
//////////////////System Comment End//////////////////
// acm.cpp : Defines the entry point for the console application.
//
///*
#include<stdio.h>
#include<stdlib.h>

void add(_int64 (*data)[20],int N)
{
	_int64 x[20],y[20],m[20];
	for(int i=0;i<20;i++)
	{
		x[i]=data[N-1][i];
		y[i]=data[N-2][i];
		m[i]=0;
	}
	for(int i=0;i<19;i++)
	{
		m[i]+=x[i]+y[i];
		m[i+1]=m[i+1]+m[i]/10000000000000000;
		m[i]=m[i]%10000000000000000;
	}
	m[19]=m[19]+x[19]+y[19];
	for(int i=0;i<20;i++)
		data[N][i]=m[i];
}

int main()
{
	int N,m,flag;
	_int64 data[1000][20];
#ifndef ONLINE_JUDGE
	freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
#endif
	for(int i=1;i<20;i++)
	{
		data[0][i]=0;
		data[1][i]=0;
	}
	data[0][0]=1;data[1][0]=1;
	for(int i=2;i<1000;i++)
	{
		add(data,i);
	}
	
	scanf("%d",&N);
	while(N--)
	{
		scanf("%d",&m);
		flag=0;
		for(int i=19;i>0;i--)
			if(data[m-1][i] > 0 && flag==0)
			{
				flag=1;
				printf("%I64d",data[m-1][i]);
			}
			else if(data[m-1][i] > 0 && flag==1)
			{
				printf("%016I64d",data[m-1][i]);
			}
		if(flag==1)
			printf("%016I64d\n",data[m-1][0]);
		else
			printf("%I64d\n",data[m-1][0]);
	}
	
	
#ifndef ONLINE_JUDGE
	fclose(stdin);
	//fclose(stdout);
#endif
	return 0;
}
//*/
