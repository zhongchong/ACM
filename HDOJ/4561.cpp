////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-05-25 18:59:18
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 4561
////Problem Title: 
////Run result: Accept
////Run time:359MS
////Run memory:332KB
//////////////////System Comment End//////////////////
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
#include<cmath>

using namespace std;

int data[10005];

int main()
{
	int T,n;
#ifndef	ONLINE_JUDGE
	freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
#endif
	cin>>T;
	for(int i=1;i<=T;++i)
	{
		cin>>n;
		cout<<"Case #"<<i<<": ";
		memset(data,0,sizeof(data));
		for(int j=0;j<n;++j)
			cin>>data[j];
		int sum1=0,sum2=0,max=0;
		int tem1=0,tem2=0;
		for(int j=0;j<n;++j)
		{
			if(data[j] == 0 )
			{
				tem1=0;tem2=0;
			}
			else if(data[j] > 0)
			{
				if(sum1 == 0)
					tem1=1;
				else
					tem1=sum1+1;
				if(sum2 != 0)
					tem2=sum2+1;
				else
					tem2=0;
			}
			else
			{
				if(sum1 == 0)
					tem2=1;
				else 
					tem2=sum1+1;
				if(sum2 != 0)
					tem1=sum2+1;
				else
					tem1=0;
			}
			sum1=tem1;sum2=tem2;
			//cout<<sum1<<' '<<sum2<<endl;
			if(sum1 > max)
				max=sum1;
		}
		cout<<max<<endl;
	}
#ifndef	ONLINE_JUDGE
	fclose(stdin);
	//fclose(stdout);
#endif
	return 0;
}