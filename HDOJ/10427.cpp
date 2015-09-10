////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-05-03 21:26:28
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 1042
////Problem Title: 
////Run result: Accept
////Run time:4234MS
////Run memory:480KB
//////////////////System Comment End//////////////////
// acm.cpp : Defines the entry point for the console application.
///*
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>

using namespace std;

const int Max=40000;
int data[Max];

void display()
{
	bool flag=true;
	int n=Max;
	while(n--)
	{
		if(flag && data[n]!=0)
		{
			cout<<data[n];
			flag=false;
			continue;
		}
		if(!flag)
			printf("%04d",data[n]);
	}
	cout<<endl;
}

void f(int t)
{
	int up=0;
	for(int i=0;i<Max;++i)
	{
		data[i]=data[i]*t+up;
		up=data[i]/10000;
		data[i]%=10000;
	}
	if(up != 0)
		cout<<"error";
}

int main()
{
	int m;
#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
#endif
	while(scanf("%d",&m) != EOF)
	{
		memset(data,0,sizeof(data));
		data[0]=1;
		for(int i=2;i<=m;++i)
			f(i);
		display();
	}
#ifndef ONLINE_JUDGE
    fclose(stdin);
    //fclose(stdout);
#endif
    return 0;
}
//*/