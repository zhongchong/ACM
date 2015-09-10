////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-03-23 13:10:40
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 1297
////Problem Title: 
////Run result: Accept
////Run time:578MS
////Run memory:264KB
//////////////////System Comment End//////////////////
// acm.cpp : Defines the entry point for the console application.
//
///*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define M 100

int a[M],b[M],c[M],d[M],e[M];

void copy(int data1[],int data2[])
{
	int n=M;
	while(n--)
		data1[n]=data2[n];
}

void add()
{
	int up=0;
	memset(e,0,sizeof(e));
	for(int i=0;i<M;i++)
	{
		e[i]=up+a[i]+c[i]+d[i];
		up=e[i]/1000000;
		e[i]%=1000000;
	}
	if(up > 0)
		printf("overflow\n");
}

void display()
{
	bool flag=false;
	int n=M;
	while(n--)
	{
		if(!flag && d[n] != 0)
		{
			flag=true;
			printf("%d",d[n]);
			continue;
		}
		if(flag)
			printf("%06d",d[n]);
	}
	printf("\n");
}

int main()
{
	int N;
#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
#endif
	while(scanf("%d",&N) != EOF)
	{
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		memset(c,0,sizeof(c));
		memset(d,0,sizeof(d));
		memset(e,0,sizeof(e));
		if(N >= 1 && N <= 4)
		{
			switch(N)
			{
			case 1:printf("1\n");break;
			case 2:printf("2\n");break;
			case 3:printf("4\n");break;
			case 4:printf("7\n");break;
			}
			continue;
		}
		a[0]=1;
		b[0]=2;
		c[0]=4;
		d[0]=7;
		for(int i=5;i<=N;i++)
		{
			add();
			copy(a,b);
			copy(b,c);
			copy(c,d);
			copy(d,e);
		}
		display();
	}
#ifndef ONLINE_JUDGE
    fclose(stdin);
    //fclose(stdout);
#endif
    return 0;
}
//*/