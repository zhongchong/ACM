////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-05-18 21:10:20
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 4551
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:324KB
//////////////////System Comment End//////////////////
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cmath>

using namespace std;
const int md1[12]={31,28,31,30,31,30,31,31,30,31,30,31};
const int md2[12]={31,29,31,30,31,30,31,31,30,31,30,31};
int data1[13][32];
int data2[13][32];
int ans[200][3],sum=0;

int gcd(int a,int b)
{
	return b==0?a:gcd(b,a%b);
}

bool runyear(int year)
{
	if(year%400==0 || (year%4==0 && year%100!=0 ) )
		return true;
	else
		return false;
}

void find(int a,int b)
{
	memset(ans,0,sizeof(ans));
	for(int i=1;i<=12;++i)
		for(int j=1;j<=31;++j)
		{
			if(data1[i][j]==a && data2[i][j]==b)
			{
				ans[sum][0]=i;ans[sum++][1]=j;
			}
		}
}

void init()
{
	memset(data1,0,sizeof(data1));
	memset(data2,0,sizeof(data2));
	for(int i=1;i<=12;++i)
		for(int j=1;j<=31;++j)
		{
			if(i > j)
				data1[i][j]=gcd(i,j);
			else
				data1[i][j]=gcd(j,i);
			data2[i][j]=i*j/data1[i][j];
			//cout<<i<<' '<<j<<' '<<data1[i][j]<<' '<<data2[i][j]<<endl;
		}
}

int main()
{
	int T,i=1,total;
	int a,b,year,month,day;
	bool flag=false;
#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
#endif
	cin>>T;
	init();
	//find(12,24);
	//cout<<ans[0][0]<<' '<<ans[0][1];
	//if(runyear(1992))
	//	cout<<"OK";
	for(;i<=T;++i)
	{
		sum=0;total=0;month=0;day=0;flag=false;
		cin>>a>>b>>year;
		flag=runyear(year);
		find(a,b);
		if(sum <= 0)
		{
			cout<<"Case #"<<i<<": -1"<<endl;
			continue;
		}
		else
		{
			if(!flag)
			{
				for(int j=0;j<sum;++j)
				{
					if(md1[ans[j][0]-1] >= ans[j][1] && ans[j][1] >=1)
						++total;
					else
						ans[j][2]=1;
				}
			}
			else
			{
				for(int j=0;j<sum;++j)
				{
					if(md2[ans[j][0]-1] >= ans[j][1] && ans[j][1] >= 1)
						++total;
					else
						ans[j][2]=1;
				}
			}
			if(total == 0)
				cout<<"Case #"<<i<<": -1"<<endl;
			else if(total > 1)
				cout<<"Case #"<<i<<": 1"<<endl;
			else
			{
				for(int j=0;j<sum;++j)
					if(ans[j][2] == 0)
					{
						printf("Case #%d: %d/%02d/%02d\n",i,year,ans[0][0],ans[0][1]);
					}
			}
		}
	}
#ifndef ONLINE_JUDGE
    fclose(stdin);
    //fclose(stdout);
#endif
    return 0;
}