////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: 沉默的大绵羊
////Run ID: 
////Submit time: 2013-05-16 17:00:27
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2089
////Problem Title: 
////Run result: Accept
////Run time:15MS
////Run memory:316KB
//////////////////System Comment End//////////////////
// acm.cpp : author:chong 2013 copy right reserved

#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cmath>

int dp[15][3];

using namespace std;

void init()
{
	memset(dp,0,sizeof(dp));
	dp[0][0]=1;
	for(int i=1;i<15;++i)
	{
		dp[i][0]=dp[i-1][0]*9-dp[i-1][1];//不含不吉利的数
		dp[i][1]=dp[i-1][0];//不含不吉利的数且首位为2
		dp[i][2]=dp[i-1][2]*10+dp[i-1][0]+dp[i-1][1];//含不吉利的数
	}
}

int DP(int x)
{
	int data[15];
	int len=0,sum=x,ans=0;
	bool flag=false;
	for(;x;x/=10)
		data[++len]=x%10;
	data[len+1]=0;
	for(int i=len;i>0;--i)
	{
		ans+=dp[i-1][2]*data[i];
		if(flag)
			ans+=dp[i-1][0]*data[i];
		else
		{
			if(data[i] > 4)
				ans+=dp[i-1][0];
			if(data[i] > 6)
				ans+=dp[i-1][1];
			if(data[i+1]==6&&data[i]>2)
				ans+=dp[i-1][0];
		}
		if(data[i]==4 || (data[i+1]==6&&data[i]==2) )
			flag=true;

	}
	return sum-ans;
}

int main()
{
	int a,b;
#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
#endif
	init();
	while(cin>>a>>b &&( a || b ) )
	{
		cout<<DP(b+1)-DP(a)<<endl;
	}
#ifndef ONLINE_JUDGE
    fclose(stdin);
    //fclose(stdout);
#endif
    return 0;
}
