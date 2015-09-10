////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-05-19 19:34:00
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 1711
////Problem Title: 
////Run result: Accept
////Run time:1984MS
////Run memory:4280KB
//////////////////System Comment End//////////////////
// acm.cpp : author:chong 2013 copy right reserved
///*
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cmath>

using namespace std;

int data1[1000001],data2[10001],len1=0,len2=0;
int next[10001];

void getNextVal()
{
	int i=0,j=-1;
	next[0]=-1;
	while(i<len2-1)
	{
		if(j==-1 || data2[i]==data2[j])
		{
			++i;++j;
			next[i]=j;
		}
		else
			j=next[j];
	}
}

int kmp()
{
	int i=0,j=0;
	while(i<len1&&j<len2)
	{
		if(j==-1 || data1[i]==data2[j])
		{
			++i;++j;
		}
		else
			j=next[j];
	}
	if(j==len2)
		return i-j+1;
	else
		return -1;
}

int main()
{
	int T;
#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
#endif
	cin>>T;
	while(T--)
	{
		cin>>len1>>len2;
		for(int i=0;i<len1;++i)
			cin>>data1[i];
		for(int i=0;i<len2;++i)
			cin>>data2[i];
		getNextVal();
		cout<<kmp()<<endl;
	}
#ifndef ONLINE_JUDGE
    fclose(stdin);
    //fclose(stdout);
#endif
    return 0;
}
//*/