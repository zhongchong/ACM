////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-05-02 09:00:56
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 1396
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:268KB
//////////////////System Comment End//////////////////
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
	__int64 data[501],n;
#ifndef	ONLINE_JUDGE
	freopen("in.txt","r",stdin);
#endif
	data[1]=1;data[2]=5;
	for(__int64 i=3;i<=500;++i)
	{
		if(i & 1)
		{
			data[i]=data[i-1]+2*i-1+(i-1)*i/2;
			__int64 j=i-3;
			while(j)
			{
				data[i]+=j;
				j-=2;
			}
		}
		else
		{
			data[i]=data[i-1]+2*i-1+(i-1)*i/2;
			__int64 j=i-3;
			while(1 != j)
			{
				data[i]+=j;
				j-=2;
			}
			++data[i];
		}
	}
	while(scanf("%I64d",&n) != EOF)
		printf("%I64d\n",data[n]);
#ifndef ONLINE_JUDGE
	fclose(stdin);
#endif
	return 0;
}