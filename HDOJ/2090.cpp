////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2014-11-14 09:34:16
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2090
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:240KB
//////////////////System Comment End//////////////////
#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{

	char vegetable[20];
	double num=0, price=0;
	double sum=0;
	while(scanf("%s%lf%lf",&vegetable,&num,&price) != EOF)
	{
		sum += num * price;
	}
	printf("%.1lf\n",sum);




	return 0;
}