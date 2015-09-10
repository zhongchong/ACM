////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-05-19 16:19:40
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 4552
////Problem Title: 
////Run result: Accept
////Run time:15MS
////Run memory:296KB
//////////////////System Comment End//////////////////
// acm.cpp : author:chong 2013 copy right reserved
///*
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cmath>

using namespace std;

int main()
{
	char s[100000];
	int sum,i,j,k;
#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
#endif
	while(scanf("%s",s)!=EOF)
	{
		sum=0;
		int len=strlen(s);
		for(int i=0;i<len;++i)
		{
			if(s[i] != s[0])
				continue;
			else
			{
				for(k=0,j=i;k<len&&j<len;++k,++j)
				{
					if(s[k]==s[j])
						++sum;
					else
						break;
				}
			}
		}
		sum%=256;
		printf("%d\n",sum);
	}
#ifndef ONLINE_JUDGE
    fclose(stdin);
    //fclose(stdout);
#endif
    return 0;
}
//*/