////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: 沉默的大绵羊
////Run ID: 
////Submit time: 2013-06-13 10:45:37
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2028
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:296KB
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
	/*欧几里得算法*/
	int gcd(int a,int b)
	{
		return b==0?a:gcd(b,a%b);
	}
#endif

using namespace std;

int main()
{
	int n, data[1000];

#ifndef	ONLINE_JUDGE
	freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
#endif
	
	while( scanf("%d",&n) != EOF)
	{
		int max;
		for(int i=0;i<n;++i)
			cin>>data[i];
		max=data[0];

		for(int i = 1; i < n; ++i)
		{
			if(data[i]>max)
				max=data[i]*( max/gcd(data[i],max) );
			else
				max=data[i]*( max/gcd(max,data[i]) );
		}

		cout<<max<<endl;
	}

#ifndef	ONLINE_JUDGE
	fclose(stdin);
	//fclose(stdout);
#endif

	return 0;
}