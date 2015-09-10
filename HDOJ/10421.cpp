////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-03-22 20:51:23
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 1042
////Problem Title: 
////Run result: Accept
////Run time:1156MS
////Run memory:288KB
//////////////////System Comment End//////////////////
// acm.cpp : Defines the entry point for the console application.
//
///*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int data[8001];

int main()
{
	int m,i,j;
#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
#endif
	while( scanf("%d",&m) != EOF )
	{
		for(int i=0;i<8001;i++)
			data[i]=0;
		for(i=2,data[0]=1;i<=m;i++)
		{
			for(j=0;j<8000;j++)
				data[j]*=i;
			for(j=0;j<8000;j++)
			{
				data[j+1]+=data[j]/100000;
				data[j]%=100000;
			}
		}
		for(i=8000;i>=0&&data[i]==0;i--);
		printf("%d",data[i--]);
		for(;i>=0;i--)
			printf("%05d",data[i]);
		printf("\n");
	}

#ifndef ONLINE_JUDGE
    fclose(stdin);
    //fclose(stdout);
#endif
    return 0;
}
//*/