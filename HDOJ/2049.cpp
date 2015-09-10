////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-03-05 15:21:06
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2049
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:248KB
//////////////////System Comment End//////////////////
// acm.cpp : Defines the entry point for the console application.
//

#include<stdio.h>

int c(int m,int n)
{
	int result=1;
	for(int i=0;i<n;i++)
	{
		result*=m-i;
		result=result/(i+1);
	}
	return result;
}

int main()
{
	_int64 data[20];
	int N,m,n;
	data[0]=0;
	data[1]=1;
	
#ifndef ONLINE_JUDGE
	freopen("in.txt","r",stdin);
#endif

	for(int i=2;i<20;i++)
	{
		data[i]=i*(data[i-1]+data[i-2]);
	}
	scanf("%d",&N);
	while(N--)
	{
		scanf("%d%d",&m,&n);
		printf("%I64d\n",data[n-1]*c(m,n));
	}

#ifndef ONLINE_JUDGE
	fclose(stdin);
#endif
	return 0;
}