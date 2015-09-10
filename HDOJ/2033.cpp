////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2014-01-18 14:14:45
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2033
////Problem Title: 
////Run result: Accept
////Run time:15MS
////Run memory:320KB
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

double x[100],y[100];

int main()
{
	int n;
	int a,b,c,d,e,f;
	int t,m,s;
#ifndef	ONLINE_JUDGE
	freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
#endif
	cin>>n;
	while(n--)
	{
		scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		s=c+f;
		m=b+e+s/60;
		t=a+d+m/60;
		s%=60;
		m%=60;
		printf("%d %d %d\n",t,m,s);
	}

#ifndef	ONLINE_JUDGE
	fclose(stdin);
	//fclose(stdout);
#endif
	return 0;
}
//*/