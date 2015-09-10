////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-06-03 14:33:39
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2025
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:264KB
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
	string s;
#ifndef	ONLINE_JUDGE
	freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
#endif
	while(cin>>s)
	{
		char max=s.at(0);
		int data[101],len=0;
		memset(data,0,sizeof(data));
		//cout<<s.length()<<endl;
		for(int i=0;i<s.length();++i)
			if(s.at(i) > max)
			{
				max=s.at(i);
				len=0;
				data[len++]=i;
			}
			else if(s.at(i) == max)
			{
				data[len++]=i;
			}
		while(len--)
		{
			s.insert(data[len]+1,"(max)");
		}
		cout<<s<<endl;
	}
#ifndef	ONLINE_JUDGE
	fclose(stdin);
	//fclose(stdout);
#endif

	return 0;
}