////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-06-16 17:58:39
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2099
////Problem Title: 
////Run result: Accept
////Run time:15MS
////Run memory:272KB
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


int main()
{
	int a,b;
	int data[101],len;
#ifndef	ONLINE_JUDGE
	freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
#endif

	while( scanf("%d%d",&a,&b), a!=0 || b!=0)
	{
		len=0;
		for(int i=0;i<100;++i)
			if( (a*100+i) % b == 0)
			{
				data[len++]=i;
			}
		printf("%02d",data[0]);
		for(int i=1;i<len;++i)
			printf(" %02d",data[i]);
		cout<<endl;
	}

#ifndef	ONLINE_JUDGE
	fclose(stdin);
	//fclose(stdout);
#endif

	return 0;
}