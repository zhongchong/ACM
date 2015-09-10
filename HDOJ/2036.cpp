////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2014-01-18 13:54:45
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2036
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:272KB
//////////////////System Comment End//////////////////

#include<cstdio>
#include<iostream>
#include<string>
#include<cstring>
#include<cstdlib>
#include<queue>
#include<cmath>

using namespace std;

double x[100],y[100];

int main()
{
	int n;
	double sum;
	double a,b,c,d;

	while(scanf("%d",&n), n !=  0 )
	{
		sum = 0;
		for(int i = 0; i < n; ++i)
		{
			scanf("%lf%lf",&x[i],&y[i]);
		}
		for(int i = 1; i < n-1 ; ++i)
		{
			a=x[i]-x[0];
			b=y[i]-y[0];
			c=x[i+1]-x[0];
			d=y[i+1]-y[0];
			sum+=(a*d-b*c)*0.5;
		}
		printf("%.1lf\n",sum);
	}



	return 0;
}
