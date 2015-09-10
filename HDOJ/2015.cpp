////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-05-03 21:35:14
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2015
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:324KB
//////////////////System Comment End//////////////////
// acm.cpp : Defines the entry point for the console application.
///*
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
	int m,n;
#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
#endif
	while(scanf("%d%d",&m,&n) != EOF)
	{
		int t=0;
		bool flag=true;
		for(int i=1;i<=m;++i)
		{
			t+=(i*2);
			if(flag && i%n == 0)
			{
				cout<<t/n;t=0;flag=false;
			}
			else if(!flag && i%n == 0)
			{
				cout<<' '<<t/n;t=0;
			}
		}
		if(m%n != 0)
			cout<<' '<<t/(m%n)<<endl;
		else
			cout<<endl;
	}
#ifndef ONLINE_JUDGE
    fclose(stdin);
    //fclose(stdout);
#endif
    return 0;
}
//*/