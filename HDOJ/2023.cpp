////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-05-30 19:52:37
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2023
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:304KB
//////////////////System Comment End//////////////////
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>

using namespace std;


int n,m;
double data[60][10];
double ava[60],ava2[10];

int main()
{

#ifndef	ONLINE_JUDGE
	freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
#endif
	while(scanf("%d%d",&n,&m) != EOF)
	{
		double sum;
		memset(data,0,sizeof(data));
		memset(ava,0,sizeof(ava));
		memset(ava2,0,sizeof(ava2));
		for(int i=0;i<n;++i)
		{
			sum=0;
			for(int j=0;j<m;++j)
			{
				cin>>data[i][j];
				sum+=data[i][j];
				ava2[j]+=data[i][j];
			}
			ava[i]=sum/(double)m;
		}
		for(i=0;i<m;++i)
			ava2[i]/=n;
		printf("%.2lf",ava[0]);
		for(i=1;i<n;++i)
			printf(" %.2lf",ava[i]);
		printf("\n%.2lf",ava2[0]);
		for(i=1;i<m;++i)
			printf(" %.2lf",ava2[i]);
		cout<<endl;
		int total=0;
		bool flag=false;
		for(i=0;i<n;++i)
		{
			for(int j=0;j<m;++j)
			{
				flag=true;
				if( data[i][j] < ava2[j] )
				{
					flag=false;
					break;
				}
			}
			if(flag)
				++total;
		}
		cout<<total<<endl<<endl;
	}
#ifndef	ONLINE_JUDGE
	fclose(stdin);
	//fclose(stdout);
#endif
	return 0;
}