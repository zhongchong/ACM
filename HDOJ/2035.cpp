////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2014-01-22 18:16:34
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2035
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:256KB
//////////////////System Comment End//////////////////
///*
#include<cstdio>
#include<iostream>
#include<string>
#include<cstring>
#include<cstdlib>
#include<queue>
#include<cmath>

using namespace std;

int caculate(int a,int b)
{
	int sum=1;
	if(b == 0)
		return 1;
	while(b)
	{
		if(b & 1)
		{
			sum *= a;
			sum%=1000;
		}
		a *= a;
		a %= 1000;
		b >>= 1;
	}
	return sum;
}

int main()
{
	int a,b;
#ifndef	ONLINE_JUDGE
	freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
#endif
	
	while(scanf("%d%d",&a,&b), a!=0 || b!= 0)
	{
		int res;
		res=caculate(a,b);
		printf("%d\n",res);
	}

#ifndef	ONLINE_JUDGE
	fclose(stdin);
	//fclose(stdout);
#endif
	return 0;
}
//*/