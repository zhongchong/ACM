////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-05-14 20:38:45
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 4500
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:340KB
//////////////////System Comment End//////////////////
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>

using namespace std;

int N,M,data[21][21];
int score[21][21];

inline bool signCheck(int a,int b)
{
	if( (a^b)&0x80000000  )
		return false;
	else
		return true;
}

int getScore(int i,int j)
{
	int sum=0;
	if(j-1 >= 0 )
	{
		if( signCheck(data[i][j],data[i][j-1]) )
			sum-=abs( data[i][j-1] );
		else
			sum+=abs( data[i][j-1] );
	}
	if(j+1 < M )
	{
		if( signCheck(data[i][j],data[i][j+1]) )
			sum-=abs( data[i][j+1] );
		else
			sum+=abs( data[i][j+1] );
	}
	if(i-1 >= 0 )
	{
		if( signCheck(data[i][j],data[i-1][j]) )
			sum-=abs( data[i-1][j] );
		else
			sum+=abs( data[i-1][j] );
	}
	if(i+1 < N )
	{
		if( signCheck(data[i][j],data[i+1][j]) )
			sum-=abs( data[i+1][j] );
		else
			sum+=abs( data[i+1][j] );
	}
	return sum;
}

int main()
{
	int maxi=0,maxj=0,max=-1000;
#ifndef	ONLINE_JUDGE
	freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
#endif
	while(scanf("%d%d",&N,&M) , 0!=N || 0!=M)
	{
		memset(data,0,sizeof(data));
		memset(score,0,sizeof(score));
		maxi=0;maxj=0;max=-1000;
		for(int i=0;i<N;++i)
			for(int j=0;j<M;++j)
				cin>>data[i][j];
		for(i=0;i<N;++i)
			for(int j=0;j<M;++j)
			{
				score[i][j]=getScore(i,j);
				if(max == -1000)
				{
					maxi=i;
					maxj=j;
					max=score[i][j];
				}
				if(score[i][j] > max)
				{
					maxi=i;
					maxj=j;
					max=score[i][j];
				}
			}
		cout<<maxi+1<<' '<<maxj+1<<' '<<max<<endl;
	}
#ifndef	ONLINE_JUDGE
	fclose(stdin);
	//fclose(stdout);
#endif
	return 0;
}