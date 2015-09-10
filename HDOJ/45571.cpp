////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-05-25 10:52:07
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 4557
////Problem Title: 
////Run result: Accept
////Run time:62MS
////Run memory:320KB
//////////////////System Comment End//////////////////
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>

using namespace std;

typedef struct people
{
	int weight;
	int time;
	char name[20];
}people;

people rencai[1005];
int sum=0;

int comp(const void* a,const void* b)
{
	int m=(*(const struct people*)a).weight-(*(const struct people*)b).weight;
	if(m != 0)
		return m;
	else
		return (*(const struct people*)b).time-(*(const struct people*)a).time;
}

void display()
{
	for(int i=0;i<sum;++i)
	{
		printf("%s %d %d\n",rencai[i].name,rencai[i].weight,rencai[i].time);
	}
}

int find(int m)
{
	for(int i=0;i<sum;++i)
	{
		if(rencai[i].weight >= m)
			return i;
	}
	return -1;
}

void remove(int m)
{
	for(int i=m;i<sum-1;++i)
	{
		rencai[i]=rencai[i+1];
	}
	--sum;
}

int main()
{
	int T,n;
	char s[10];
#ifndef	ONLINE_JUDGE
	freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
#endif
	cin>>T;
	for(int i=1;i<=T;++i)
	{
		cin>>n;
		printf("Case #%d:\n",i);
		memset(rencai,0,sizeof(rencai));
		sum=0;
		while(n--)
		{
			scanf("%s",s);
			if( strcmp(s,"Add")==0 )
			{
				rencai[sum].time=n+1;
				scanf("%s%d",rencai[sum].name,&rencai[sum].weight);
				++sum;
				qsort(rencai,sum,sizeof(people),comp);
				cout<<sum<<endl;
			}
			else if(strcmp(s,"Find")==0 )
			{
				int m,t;
				cin>>m;
				
				if(sum == 0)
				{
					cout<<"WAIT..."<<endl;
					continue;
				}
				t=find(m);
				if(t  != -1)
				{
					cout<<rencai[t].name<<endl;
					remove(t);
				}
				else
					cout<<"WAIT..."<<endl;
			}
		}
		//display();
	}
#ifndef	ONLINE_JUDGE
	fclose(stdin);
	//fclose(stdout);
#endif
	return 0;
}