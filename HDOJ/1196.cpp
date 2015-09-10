////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-05-02 09:16:18
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 1196
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:332KB
//////////////////System Comment End//////////////////
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
	int n;
#ifndef	ONLINE_JUDGE
	freopen("in.txt","r",stdin);
#endif
	while(cin>>n && n)
	{
		int low,res=1;
		low=n%2;
		while(1 != low)
		{
			n/=2;
			low=n%2;
			res*=2;
		}
		cout<<res<<endl;
	}
#ifndef ONLINE_JUDGE
	fclose(stdin);
#endif
	return 0;
}