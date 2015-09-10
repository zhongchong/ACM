////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-04-13 14:34:43
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 4165
////Problem Title: 
////Run result: Accept
////Run time:15MS
////Run memory:232KB
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
__int64 data[31];
 int main()
{
	 int i=1,j;
	 __int64 n;
	 memset(data,0,sizeof(data));
	 data[0]=1;  data[1]=1;
	 for(i=2;i<=30;++i)
		 for(j=0;j<i;++j)
		 {
			 data[i]+=data[j]*data[i-1-j];
		 }
	 while(scanf("%I64d",&n),n!=0)
		 printf("%I64d\n",data[n]);
	 return 0;
 }

