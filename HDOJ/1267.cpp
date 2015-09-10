////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-04-11 10:24:09
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 1267
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:280KB
//////////////////System Comment End//////////////////
// acm.cpp : Defines the entry point for the console application.
//
///*
#include<iostream>

using namespace std;

__int64 factorial(__int64 n)
{
	if(n == 1)
		return 1;
	else
		return n*factorial(n-1);
}

__int64 C(__int64 m,__int64 n)
{
	__int64 res=1;
	for(int i=0;i<n;i++)
	{
		res*=(m-i);
		res/=(i+1);
	}
	return res;
}

int main()
{
	__int64 m,n;
#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
#endif
	while(scanf("%I64d%I64d",&m,&n) != EOF)
	{
		cout<<C(m+n,n)-C(m+n,m+1)<<endl;
	}
#ifndef ONLINE_JUDGE
    fclose(stdin);
    //fclose(stdout);
#endif
    return 0;
}
//*/