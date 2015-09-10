////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-03-22 20:54:59
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
	int m,i,j,t;
	bool flag;
#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
#endif
	while( scanf("%d",&m) != EOF )
	{
		memset(data,0,sizeof(data));
		data[0]=1;
		flag=false;
		for(i=2;i<=m;i++)
		{
			for(j=0;j<8000;j++)
				data[j]*=i;
			for(j=0;j<8000;j++)
			{
				data[j+1]+=data[j]/100000;
				data[j]%=100000;
			}
		}
		t=8000;
		while(t--)
		{
			if(!flag && data[t]!=0)
			{
				flag=true;
				printf("%d",data[t]);
				continue;
			}
			if(flag)
				printf("%05d",data[t]);
		}
		printf("\n");
	}

#ifndef ONLINE_JUDGE
    fclose(stdin);
    //fclose(stdout);
#endif
    return 0;
}
//*/