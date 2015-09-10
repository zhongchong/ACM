////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-05-11 10:26:41
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 1018
////Problem Title: 
////Run result: Accept
////Run time:875MS
////Run memory:336KB
//////////////////System Comment End//////////////////
// acm.cpp : Defines the entry point for the console application.

#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
	__int64 n,m;
#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
#endif
	scanf("%I64d",&m);
	while( m-- )
	{
		scanf("%I64d",&n);
		double num=0;
		for(int i=1;i<=n;++i)
			num+=(log((double)i)/log(10.0));
		cout<<(int)floor(num)+1<<endl;
	}
#ifndef ONLINE_JUDGE
    fclose(stdin);
    //fclose(stdout);
#endif
    return 0;
}
