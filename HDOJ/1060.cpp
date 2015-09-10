////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-05-10 18:21:28
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 1060
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:360KB
//////////////////System Comment End//////////////////
// acm.cpp : Defines the entry point for the console application.

#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
	__int64 n;
	int m;
#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
#endif
	cin>>m;
	while( m-- )
	{
		scanf("%I64d",&n);
		double num=n*log( (double)n )/log(10.0);
		__int64 t=floor(num);
		printf("%I64d\n",(__int64)pow(10.0,num-(double)t));
	}
#ifndef ONLINE_JUDGE
    fclose(stdin);
    //fclose(stdout);
#endif
    return 0;
}
