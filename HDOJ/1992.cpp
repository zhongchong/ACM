////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-05-02 20:36:07
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 1992
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:336KB
//////////////////System Comment End//////////////////
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>

using namespace std;

int data[1001];

int main()
{
	int n,c=1,t;
#ifndef	ONLINE_JUDGE
	freopen("in.txt","r",stdin);
#endif
	memset(data,0,sizeof(data));
	data[0]=1;data[1]=1;data[2]=5;
	for(int i=3;i<=1000;++i)
	{
		data[i]=data[i-1]+data[i-2]*4;
		int m=3;
		while(i-m>=0)
		{
			if(m & 1)
				data[i]+=2*data[i-m];
			else
				data[i]+=3*data[i-m];
			m++;
		}
	}
	cin>>n;
	while(n--)
	{
		cin>>t;
		cout<<c++<<' '<<data[t]<<endl;
	}
#ifndef	ONLINE_JUDGE
	fclose(stdin);
#endif
	return 0;
}