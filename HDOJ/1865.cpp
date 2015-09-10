////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-03-26 22:24:06
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 1865
////Problem Title: 
////Run result: Accept
////Run time:93MS
////Run memory:232KB
//////////////////System Comment End//////////////////
// acm.cpp : Defines the entry point for the console application.
//
///*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define M 100



void add(int a[],int b[],int c[])
{
	int up=0;
	memset(c,0,sizeof(c));
	for(int i=0;i<M;i++)
	{
		c[i]=up+a[i]+b[i];
		up=c[i]/1000000;
		c[i]%=1000000;
	}
	if(up > 0)
		printf("overflow\n");
}

void copy(int data1[],int data2[])
{
	for(int i=0;i<M;i++)
		data1[i]=data2[i];
}

void display(int data[])
{
	bool flag=false;
	int N=M;
	while(N--)
	{
		if(!flag && data[N]!=0)
		{
			flag=true;
			printf("%d",data[N]);
			continue;
		}
		if(flag)
			printf("%06d",data[N]);
	}
	printf("\n");
}

int main()
{
	int N,len;
	int a[M],b[M],c[M];
	char s[201];
#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
#endif
	scanf("%d",&N);
	getchar();
	while(N--)
	{
		gets(s);
		len=strlen(s);
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		if(len == 1)
		{
			printf("1\n");
			continue;
		}
		else if(len ==2 )
		{
			printf("2\n");
			continue;
		}
		a[0]=1;b[0]=2;
		for(int i=3;i<=len;i++)
		{
			add(a,b,c);
			copy(a,b);
			copy(b,c);
		}
		display(c);
	}
	

#ifndef ONLINE_JUDGE
    fclose(stdin);
    //fclose(stdout);
#endif
    return 0;
}
//*/