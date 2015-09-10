////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-06-14 19:22:08
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2029
////Problem Title: 
////Run result: Accept
////Run time:15MS
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

#ifdef ONLINE_JUDGE
	//nothing
#endif

using namespace std;

void check(char s[])
{
	int len=strlen(s);
	bool flag=true;
	for(int i=0;i<len/2;++i)
		if(s[i]!=s[len-1-i])
		{
			flag=false;
			break;
		}
	if(flag)
		cout<<"yes"<<endl;
	else
		cout<<"no"<<endl;
}

int main()
{
	int n;
	char s[200];
#ifndef	ONLINE_JUDGE
	freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
#endif
	cin>>n;getchar();
	while(n--)
	{
		gets(s);
		check(s);
	}

#ifndef	ONLINE_JUDGE
	fclose(stdin);
	//fclose(stdout);
#endif

	return 0;
}