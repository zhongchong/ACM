////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-06-09 19:12:34
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2027
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:280KB
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
	int t;
	char s[102];
#ifndef	ONLINE_JUDGE
	freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
#endif
	cin>>t;getchar();
	while( t-- )
	{
		int a,b,c,d,e;
		a=b=c=d=e=0;
		gets(s);
		for(int i=0;i<strlen(s);++i)
		{
			switch(s[i])
			{
			case 'a':++a;break;
			case 'e':++b;break;
			case 'i':++c;break;
			case 'o':++d;break;
			case 'u':++e;break;
			}
		}
		printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n",a,b,c,d,e);
		if(t)
			printf("\n");
	}
#ifndef	ONLINE_JUDGE
	fclose(stdin);
	//fclose(stdout);
#endif

	return 0;
}