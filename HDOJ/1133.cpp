////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-04-02 16:16:28
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 1133
////Problem Title: 
////Run result: Accept
////Run time:15MS
////Run memory:232KB
//////////////////System Comment End//////////////////
// acm.cpp : Defines the entry point for the console application.
//
///*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>

#define M 200

__int64 data[M];

void display(__int64 data[],int m)
{
	bool flag=false;
	for(int i=m-1;i>=0;--i)
	{
		if(!flag && data[i]!=0)
		{
			flag=true;
			printf("%I64d",data[i]);
			continue;
		}
		if(flag)
			printf("%06I64d",data[i]);
	}
	printf("\n");
}

int main()
{
	int count=1;
	__int64 res,m,n;
#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
#endif

	while(scanf("%I64d%I64d",&m,&n),0 != m || 0 != n)
	{
		if(n > m)
		{
			printf("Test #%d:\n0\n",count);
			++count;
			continue;
		}
		res=m-n+1;
		memset(data,0,sizeof(data));
		data[0]=1;
		for(__int64 i=2;i<=(m+n);++i)
		{
			__int64 up=0;
			for(int j=0;j<M;++j)
			{
				data[j]=data[j]*i+up;
				up=data[j]/1000000;
				data[j]%=1000000;
			}
			if(up > 0)
				printf("overflow\n");
		}
		__int64 up=0;
		for(int j=0;j<M;++j)
		{
			data[j]=data[j]*res+up;
			up=data[j]/1000000;
			data[j]%=1000000;
		}
		if(up > 0)
			printf("overflow\n");
		res=m+1;
		up=0;
		for(int j=M-1;j>=0;--j)
		{
			data[j]+=(up*1000000);
			up=data[j]%res;
			data[j]/=res;
		}
		if(up > 0)
			printf("overflow\n");
		printf("Test #%d:\n",count);
		display(data,M);
		count++;
	}
	

#ifndef ONLINE_JUDGE
    fclose(stdin);
    //fclose(stdout);
#endif
    return 0;
}
//*/