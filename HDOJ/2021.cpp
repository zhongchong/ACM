////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-05-31 18:25:54
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2021
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:296KB
//////////////////System Comment End//////////////////
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
#include<cmath>

#ifndef ONLINE_JUDGE
	#include"utility.h"
#endif

using namespace std;

int getNum(int n)
{
	int ans=0;
	if(n >= 100)
	{
		ans+=n/100;
		n%=100;
	}
	if(n >= 50)
	{
		ans+=n/50;
		n%=50;
	}
	if(n >= 10)
	{
		ans+=n/10;
		n%=10;
	}
	if(n >= 5)
	{
		ans+=n/5;
		n%=5;
	}
	if(n >= 2)
	{
		ans+=n/2;
		n%=2;
	}
	ans+=n;
	return ans;
}
int main()
{
	int n;
#ifndef	ONLINE_JUDGE
	freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
#endif
	while(scanf("%d",&n) , n!= 0)
	{
		int ans=0;
		for(int i=0;i<n;++i)
		{
			int m;
			cin>>m;
			ans+=getNum(m);
		}
		cout<<ans<<endl;
	}
#ifndef	ONLINE_JUDGE
	fclose(stdin);
	//fclose(stdout);
#endif

	return 0;
}