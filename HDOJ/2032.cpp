////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-06-16 17:26:22
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2032
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:280KB
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

#ifdef ONLINE_JUDGE
	//nothing
#endif

using namespace std;

void display(int N, int data[])
{
	cout<<data[0];
	int temp=1;
	for(int i=1;i<=N;++i)
	{
		int t;
		t=data[i]+data[i-1];
		data[i-1]=temp;
		cout<<' '<<t;
		temp=t;
	}
	data[N]=temp;
	cout<<endl;
}

int main()
{
	int N, data[31];
#ifndef	ONLINE_JUDGE
	freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
#endif
	memset(data,0,sizeof(data));
	data[0]=1;
	while( scanf("%d",&N) != EOF)
	{
		memset(data,0,sizeof(data));data[0]=1;
		display(0,data);
		for(int i=1;i<N;++i)
			display(i,data);
		cout<<endl;
	}

#ifndef	ONLINE_JUDGE
	fclose(stdin);
	//fclose(stdout);
#endif

	return 0;
}