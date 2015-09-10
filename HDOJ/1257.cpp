////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-05-01 13:11:17
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 1257
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:572KB
//////////////////System Comment End//////////////////
#include<cstdio>
#include<algorithm>
#include<iostream>

const int Max=30001;
int data[Max],len[Max];

using namespace std;

int main()
{
	int n,count,length,min;
	int i,j;
	while(scanf("%d",&n) != EOF)
	{
		memset(data,0,sizeof(data));
		memset(len,0,sizeof(len));
		count=0;
		for(i=0;i<n;++i)
			cin>>data[i];
		for(i=0;i<n;++i)
		{
			min=-1;
			length=300000;
			for(j=0;j<count;++j)
				if(data[i] < len[j] && len[j]-data[i] < length)
				{
					min=j;
					length=len[j]-data[i];
				}
			if(-1 == min)
				len[count++]=data[i];
			else
				len[min]=data[i];
		}
		cout<<count<<endl;
	}
	return 0;
}