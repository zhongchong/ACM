////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2014-01-18 15:05:14
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2034
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:316KB
//////////////////System Comment End//////////////////
///*
#include<cstdio>
#include<iostream>
#include<string>
#include<cstring>
#include<cstdlib>
#include<queue>
#include<cmath>

using namespace std;

int a[100],b[100],c[100];

int main()
{
	int n,m;
#ifndef	ONLINE_JUDGE
	freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
#endif
	
	while(scanf("%d%d",&n,&m), n != 0 || m != 0)
	{
		for(int i=0;i<n;++i)
			cin>>a[i];
		for(int j=0;j<m;++j)
			cin>>b[j];
		int count=0;
		bool isCommon;
		for(int i=0;i<n;++i)
		{
			isCommon=false;
			for(int j=0;j<m;++j)
			{
				if(b[j] == a[i])
				{
					isCommon=true;
					break;
				}
			}
			if(isCommon)
				continue;
			else
			{
				c[count]=a[i];
				count++;
			}
		}
		if(count)
		{
			sort(c,c+count);
			for(int i=0;i<count;++i)
				printf("%d ",c[i]);
			cout<<endl;
		}
		else
			cout<<"NULL"<<endl;
	}

#ifndef	ONLINE_JUDGE
	fclose(stdin);
	//fclose(stdout);
#endif
	return 0;
}
//*/