////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-05-31 11:41:41
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2020
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:292KB
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

int comp(const void* a,const void* b)
{
	return *(int*)b-*(int*)a;
}

int main()
{
	int n,data[101][2];
#ifndef	ONLINE_JUDGE
	freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
#endif
	while(scanf("%d",&n) , n!= 0)
	{
		for(int i=0;i<n;++i)
		{
			cin>>data[i][1];
			data[i][0]=abs(data[i][1]);
		}
		qsort(data,n,sizeof(int)*2,comp);
		cout<<data[0][1];
		for(int i=1;i<n;++i)
			cout<<' '<<data[i][1];
		cout<<endl;
	}
#ifndef	ONLINE_JUDGE
	fclose(stdin);
	//fclose(stdout);
#endif

	return 0;
}