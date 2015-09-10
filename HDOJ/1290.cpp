////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-04-13 15:56:55
////Compiler: GUN C
//////////////////////////////////////////////////////
////Problem ID: 1290
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:208KB
//////////////////System Comment End//////////////////
/*
 * gcc.c
 *
 *  Created on: 2013-4-13
 *      Author: chong
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

 int main()
{
	 int n,i;
	 long long res;
#ifndef ONLINE_JUDGE
	if( freopen("in.txt","r",stdin) == NULL )
		printf("error");
#endif
	while(scanf("%d",&n) != EOF)
	{
		res=0;
		for(i=1;i<n;++i)
			res+=i*(i+1);
		res/=2;
		res+=(n-1)+2;
		printf("%lld\n",res);
	}
#ifndef ONLINE_JUDGE
	fclose(stdin);
#endif
	 return 0;
 }

