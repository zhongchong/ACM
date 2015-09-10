////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-05-03 14:32:32
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2007
////Problem Title: 
////Run result: Accept
////Run time:15MS
////Run memory:324KB
//////////////////System Comment End//////////////////
// acm.cpp : Defines the entry point for the console application.
///*
#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
	int m,n,res1=0,res2=0;
#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
#endif
	while(scanf("%d%d",&m,&n) != EOF)
	{
		res1=0;res2=0;
		if(m>n)
			m^=n^=m^=n;
		for(int i=m;i<=n;++i)
			if(i & 1)
				res2+=i*i*i;
			else
				res1+=i*i;
		cout<<res1<<' '<<res2<<endl;
	}
#ifndef ONLINE_JUDGE
    fclose(stdin);
    //fclose(stdout);
#endif
    return 0;
}
//*/