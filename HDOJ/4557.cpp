////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-05-25 10:48:36
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 4557
////Problem Title: 
////Run result: Accept
////Run time:93MS
////Run memory:316KB
//////////////////System Comment End//////////////////
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>

using namespace std;

struct people
{
	int weight;
	int time;
	char name[20];
}rencai[1005];

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

int main()
{
	int T,n,t;
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
		sum=0;t=0;
		while(n--)
		{
			cin>>s;
			if( strcmp(s,"Add")==0 )
			{
				rencai[sum].time=n+1;
				cin>>rencai[sum].name>>rencai[sum].weight;
				sum++;
				qsort(rencai,sum,sizeof(people),comp);
				++t;
				cout<<t<<endl;
			}
			else
			{
				int m;
				bool flag=true;
				cin>>m;
				for(int j=0;j<sum;++j)
				{
					if(rencai[j].weight >= m )
					{
						rencai[j].weight=-1;
						cout<<rencai[j].name<<endl;
						--t;
						flag=false;
						break;
					}
				}
				if(flag)
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