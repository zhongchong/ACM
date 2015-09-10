////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-03-05 14:46:59
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2004
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:260KB
//////////////////System Comment End//////////////////
// acm.cpp : Defines the entry point for the console application.
//

#include<stdio.h>
#include<math.h>
#define PI 3.1415927

int main()
{
	double score;

	
#ifndef ONLINE_JUDGE
	freopen("in.txt","r",stdin);
#endif

	while(scanf("%lf",&score) != EOF)
	{
		if(score>= 90 && score<=100)
			printf("A\n");
		else if(score>=80 && score < 90)
			printf("B\n");
		else if(score>=70 && score < 79)
			printf("C\n");
		else if(score>=60 && score < 69)
			printf("D\n");
		else if(score>=0 && score < 59)
			printf("E\n");
		else
			printf("Score is error!\n");

	}


#ifndef ONLINE_JUDGE
	fclose(stdin);
#endif
	return 0;
}