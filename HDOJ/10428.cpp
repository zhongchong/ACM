////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-06-29 21:08:10
////Compiler: Visual C
//////////////////////////////////////////////////////
////Problem ID: 1042
////Problem Title: 
////Run result: Accept
////Run time:3796MS
////Run memory:340KB
//////////////////System Comment End//////////////////
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define max 30000
int data[max];
int zeroflow=0;

void multiply(int a[],int b)
{
	int temp=0;
	int i;
	for(i=0;i<max;++i)
	{
		a[i]=a[i]*b+temp;
		temp=a[i]/10000;
		a[i]%=10000;
	}
	if(temp!=0)
	{
		zeroflow=1;
	}
}

void display(int a[])
{
	int i=max;
	int flag=1;
	while(i--)
	{
		if(flag && a[i]!=0)
		{
			printf("%d",a[i]);
			flag=0;
			continue;
		}
		if(!flag)
		{
			printf("%04d",a[i]);
		}
	}
	printf("\n");
}

int main()
{
	int n;
	int i;
#ifndef	ONLINE_JUDGE
	freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
#endif
	while(scanf("%d",&n) != EOF)
	{
		memset(data,0,sizeof(data));
		data[0]=1;
		for(i=2;i<=n;++i)
		{
			multiply(data,i);
		}
		display(data);
	}
	if(zeroflow)
	{
		printf("overflow\n");
	}

#ifndef	ONLINE_JUDGE
	fclose(stdin);
	//fclose(stdout);
#endif
	return 0;
}