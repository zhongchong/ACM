////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-06-16 16:58:05
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2031
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

#ifdef ONLINE_JUDGE
	//nothing
#endif

using namespace std;

void display(int N, int R)
{
	if(0 != N/R)
		display(N/R,R);
	char m;
	if(N%R < 10)
		cout<<N%R;
	else
	{
		switch(N%R)
		{
		case 10:m='A';break;
		case 11:m='B';break;
		case 12:m='C';break;
		case 13:m='D';break;
		case 14:m='E';break;
		case 15:m='F';break;
		}
		cout<<m;
	}
}

int main()
{
	int N,R;
#ifndef	ONLINE_JUDGE
	freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
#endif

	while( scanf("%d%d",&N,&R) != EOF)
	{
		if(N<0)
			cout<<'-';
		display(abs(N),R);
		cout<<endl;
	}

#ifndef	ONLINE_JUDGE
	fclose(stdin);
	//fclose(stdout);
#endif

	return 0;
}