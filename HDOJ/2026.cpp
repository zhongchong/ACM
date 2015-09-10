////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-06-03 14:41:18
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2026
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:224KB
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
	char s[101];
#ifndef	ONLINE_JUDGE
	freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
#endif
	while( gets(s) )
	{
		char* p=s;
		int len='A'-'a';
		s[0]+=len;
		while(p=strstr(p," "),p != NULL)
		{
			if(p-s == strlen(s)-1)
				break;
			else
			{
				*(p+1)+=len;
				++p;
			}
		}
		puts(s);
	}
#ifndef	ONLINE_JUDGE
	fclose(stdin);
	//fclose(stdout);
#endif

	return 0;
}