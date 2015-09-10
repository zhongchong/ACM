////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-05-18 11:08:36
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 4545
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:316KB
//////////////////System Comment End//////////////////
// acm.cpp : author:chong 2013 copy right reserved
///*
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cmath>

using namespace std;

char a[1000],b[1000];
char c[101][3];
int T,n,t;

bool find(char ch1,char ch2)
{
	for(int i=0;i<n;++i)
		if(c[i][0] == ch1 && c[i][1] == ch2 && c[i][2]==0)
		{
			c[i][2]=1;
			return true;
		}
	return false;
}

void check()
{
	int len1=strlen(a),len2=strlen(b),i=0,j=0;
	while(i<len1 && j<len2)
	{
		if(a[i] == b[j] || find(b[j],a[i]))
		{
			++i;++j;
		}
		else
		{
			++j;
		}
	}
	//cout<<len1<<' '<<len2<<endl;
	if(i==len1)
		cout<<"Case #"<<t<<": happy"<<endl;
	else
		cout<<"Case #"<<t<<": unhappy"<<endl;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
#endif
	cin>>T;getchar();
	for(t=1;t<=T;++t)
	{
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		memset(c,0,sizeof(c));
		gets(a);gets(b);
		cin>>n;getchar();
		for(int i=0;i<n;++i)
		{
			cin>>c[i][0]>>c[i][1];getchar();
			//cout<<c[i][0]<<' '<<c[i][1]<<endl;
		}
		check();
	}
#ifndef ONLINE_JUDGE
    fclose(stdin);
    //fclose(stdout);
#endif
    return 0;
}
//*/