////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-04-09 20:56:12
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 1020
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:324KB
//////////////////System Comment End//////////////////
// acm.cpp : Defines the entry point for the console application.
//
///*
#include<iostream>

using namespace std;

int main()
{
	int N,total;
	char ch[10000],*p,*p2;
#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
#endif
	cin>>N;
	while(N--)
	{
		cin>>ch;
		p=ch;
		while(*p != '\0')
		{
			p2=p+1;
			while(*p2 == *p)
				++p2;
			total=p2-p;
			if(total != 1)
				cout<<total;
			cout<<*p;
			p=p2;
		}
		cout<<endl;
	}
#ifndef ONLINE_JUDGE
    fclose(stdin);
    //fclose(stdout);
#endif
    return 0;
}
//*/