////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: 沉默的大绵羊
////Run ID: 
////Submit time: 2013-05-18 16:18:06
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 4548
////Problem Title: 
////Run result: Accept
////Run time:125MS
////Run memory:2400KB
//////////////////System Comment End//////////////////
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cmath>

using namespace std;

const int MAX=1000001;
bool data1[MAX];
bool data2[MAX];
int data3[40000],sum=0;

//打素数表
void init()
{
	memset(data1,0,sizeof(data1));
	data1[0]=1;data1[1]=1;
	for(int i=2;i<MAX;++i)
		if(data1[2] == 0)
			for(int j=i*2;j<MAX;j+=i)
				data1[j]=1;
}

//打美素数表
void init2()
{
	int sum=0,m;
	for(int i=0;i<MAX;++i)
		data2[i]=data1[i];
	for(int i=2;i<MAX;++i)
		if(data2[i] == 0)
		{
			m=i;
			sum=0;
			for(;m!=0;m/=10)
				sum+=m%10;
			if(data1[sum] != 0)
				data2[i]=1;
		}
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
#endif
	int T,a,b,i=1;
	cin>>T;
	init();
	init2();
	for(i=2;i<MAX;++i)
		if(data2[i] == 0)
			data3[sum++]=i;
	//if(data2[29]== 0)
	//	cout<<data3[sum-1]<<endl;
	for(i=1;i<=T;++i)
	{
		cin>>a>>b;
		int x,y;
		x=lower_bound(data3,data3+sum,a)-data3;
		y=lower_bound(data3,data3+sum,b)-data3;
		if(x == sum)
		{
			cout<<"Case #"<<i<<": "<<0<<endl;
			continue;
		}
		if(y == sum || data3[y] != b)
			--y;
		cout<<"Case #"<<i<<": "<<y-x+1<<endl;	
	}
#ifndef ONLINE_JUDGE
    fclose(stdin);
    //fclose(stdout);
#endif
    return 0;
}