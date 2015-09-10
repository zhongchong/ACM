////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-05-03 15:36:59
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2010
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:328KB
//////////////////System Comment End//////////////////
// acm.cpp : Defines the entry point for the console application.
///*
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>

using namespace std;

int data[1000],num;

bool check(int i)
{
	int a,b,c;
	int t=i;
	a=i%10;
	i/=10;
	b=i%10;
	i/=10;
	c=i%10;
	if(c*c*c+a*a*a+b*b*b == t)
		return true;
	else
		return false;
}

int main()
{
	int m,n;
#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
#endif
	num=0;
	for(int i=100;i<=999;++i)
		if ( check(i) )
			data[num++]=i;
	while(scanf("%d%d",&m,&n) != EOF)
	{
		int c=lower_bound(data,data+num,m)-data;
		bool flag=true;
		if(c == num)
		{
			cout<<"no"<<endl;
			continue;
		}
		for(;c<num && data[c] <= n ;++c)
		{
			if(flag)
			{
				cout<<data[c];
				flag=false;
			}
			else
				cout<<' '<<data[c];
		}
		if(flag)
			cout<<"no"<<endl;
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