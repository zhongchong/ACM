////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-03-16 10:23:31
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2079
////Problem Title: 
////Run result: Accept
////Run time:156MS
////Run memory:256KB
//////////////////System Comment End//////////////////
// ACM.cpp : Defines the entry point for the console application.
//

#include <stdio.h>

int num[8],score[8],result;

void cycle(int n,int k,int f,int total)
{
	int i;
	if(f<k)
	{
		for(i=0;i<=num[f];i++)
		{
			if(total+i*score[f] <= n)
				cycle(n,k,f+1,total+i*score[f]);
		}
	}
	else
	{
		if(total == n)
			result++;
	}
}

int main(int argc, char* argv[])
{
	int N,n,k;
	int i;

#ifndef ONLINE_JUDGE
	freopen("in.txt","r",stdin);
#endif
	scanf("%d",&N);
	while(N--)
	{
		scanf("%d%d",&n,&k);
		for(i=0;i<k;i++)
			scanf("%d%d",&score[i],&num[i]);
		result=0;
		cycle(n,k,0,0);
		printf("%d\n",result);
	}

#ifndef ONLINE_JUDGE
	fclose(stdin);
#endif
	return 0;
}
