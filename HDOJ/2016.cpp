////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-05-04 09:33:34
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2016
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:336KB
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
	int n,min;
	int data[100];
#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
#endif
	while(scanf("%d",&n), n != 0)
	{
		min=0;
		for(int i=0;i<n;++i)
		{
			cin>>data[i];
			if(data[i] < data[min])
				min=i;
		}
		int temp;
		temp=data[0];
		data[0]=data[min];
		data[min]=temp;
		cout<<data[0];
		for(int i=1;i<n;++i)
			cout<<' '<<data[i];
		cout<<endl;
	}
#ifndef ONLINE_JUDGE
    fclose(stdin);
    //fclose(stdout);
#endif
    return 0;
}
//*/