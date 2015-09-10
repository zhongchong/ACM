////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-05-30 20:39:35
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2019
////Problem Title: 
////Run result: Accept
////Run time:15MS
////Run memory:296KB
//////////////////System Comment End//////////////////
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>

using namespace std;

int main()
{
	int m,n;
#ifndef	ONLINE_JUDGE
	freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
#endif
	while(scanf("%d%d",&n,&m),m != 0 || n != 0)
	{
		int t;
		bool flag=true;
		cin>>t;
		if(flag && t >= m)
		{
			cout<<m<<' ';
			flag=false;
		}
		cout<<t;
		for(int i=1;i<n;++i)
		{
			cin>>t;
			if(flag && t >= m)
			{
				cout<<' '<<m<<' '<<t;
				flag=false;
			}
			else
				cout<<' '<<t;
		}
		if(flag)
			cout<<' '<<m;
		cout<<endl;
	}
#ifndef	ONLINE_JUDGE
	fclose(stdin);
	//fclose(stdout);
#endif
	return 0;
}