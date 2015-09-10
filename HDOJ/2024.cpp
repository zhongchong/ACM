////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-06-01 14:00:48
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2024
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:284KB
//////////////////System Comment End//////////////////
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
#include<cmath>

#ifndef ONLINE_JUDGE
	#include"utility.h"
#endif

using namespace std;

int main()
{
	int m;
#ifndef	ONLINE_JUDGE
	freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
#endif
	cin>>m;getchar();
	while(m--)
	{
		char s[60];
		gets(s);
		int len=0;
		if(  (s[0]>='a'&& s[0]<='z') || (s[0]>='A' && s[0]<='Z' ) || s[0]=='_' )
		{
			++len;
		}
		for(int i=1;i<strlen(s);++i)
		{
			if( (s[i]>='0'&&s[i]<='9') || (s[i]>='a'&&s[i]<='z') || (s[i]>='A'&&s[i]<='Z') || s[i]=='_')
				++len;
		}
		if(len==strlen(s))
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	}
#ifndef	ONLINE_JUDGE
	fclose(stdin);
	//fclose(stdout);
#endif

	return 0;
}