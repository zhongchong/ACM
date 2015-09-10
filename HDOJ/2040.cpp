////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-03-17 16:57:16
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2040
////Problem Title: 
////Run result: Accept
////Run time:140MS
////Run memory:276KB
//////////////////System Comment End//////////////////
// acm.cpp : Defines the entry point for the console application.
//
///*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

_int64 yueshu(int m)
{
	_int64 i,result=0;
	for(i=1;i<m;i++)
		if(m%i == 0)
			result+=i;
	return result;
}

int main()
{
	int N;
    _int64 a,b,i;
#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
#endif
	scanf("%d",&N);
    while(N--)
    {
		scanf("%I64d%I64d",&a,&b);
		if(yueshu(a) == b || yueshu(b) == a)
			printf("YES\n");
		else
			printf("NO\n");
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    //fclose(stdout);
#endif
    return 0;
}
//*/