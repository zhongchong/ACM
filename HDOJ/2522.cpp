////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-05-04 13:32:46
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2522
////Problem Title: 
////Run result: Accept
////Run time:812MS
////Run memory:424KB
//////////////////System Comment End//////////////////
// acm.cpp : Defines the entry point for the console application.
///*
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>

using namespace std;

bool check(int m)
{
	m=abs(m);
	while(m%2==0 || m%5==0)
		if(m%2==0)
			m/=2;
		else if(m%5 == 0)
			m/=5;
	if(m==1)
		return true;
	else
		return false;
}

void display(int m)
{
	int r=10,len=0;
	bool data[100001];
	int res;
	if(m < 0)
		cout<<"-0.";
	else
		cout<<"0.";
	m=abs(m);
	memset(data,0,sizeof(data));
	data[1]=true;res=r%m;
	while(res!=0 && !data[res] )
	{
		data[res]=true;
		cout<<r/m;
		r=(res)*10;
		res=r%m;
	}
	cout<<r/m<<endl;
}

int main()
{
	int n,m;
#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
#endif
	cin>>n;
	while(n--)
	{
		cin>>m;
		if(abs(m) == 1)
			cout<<m<<endl;
		else
			display(m);
	}
#ifndef ONLINE_JUDGE
    fclose(stdin);
    //fclose(stdout);
#endif

    return 0;
}
//*/