////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2014-10-29 16:00:07
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2058
////Problem Title: 
////Run result: Accept
////Run time:140MS
////Run memory:244KB
//////////////////System Comment End//////////////////
#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{

	__int64 N, M;
	while(scanf("%I64d%I64d",&N,&M),N!=0 && M!=0)
	{
		int max = (int)sqrt((double)(M*2));
		for(__int64 k = max; k >= 1; --k)
		{
			__int64 a = ( (2*M/k)-k+1 ) / 2;
			if( (2*a+k-1)*k == 2*M  )
				printf("[%I64d,%I64d]\n",a,a+k-1);
		}
		printf("\n");
	}




	return 0;
}