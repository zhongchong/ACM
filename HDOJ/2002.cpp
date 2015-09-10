////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-03-05 14:36:00
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2002
////Problem Title: 
////Run result: Accept
////Run time:15MS
////Run memory:260KB
//////////////////System Comment End//////////////////
// acm.cpp : Defines the entry point for the console application.
//

#include<stdio.h>
#include<math.h>
#define PI 3.1415927

int main()
{
	double r;
	while(scanf("%lf",&r) != EOF)
	{
		printf("%0.3lf\n",(PI*pow(r,3)*4/3));
	}
	return 0;
}