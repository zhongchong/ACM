////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-04-07 12:27:51
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 1143
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:280KB
//////////////////System Comment End//////////////////
// acm.cpp : Defines the entry point for the console application.
//
///*
#include<iostream>

using namespace std;

int main()
{
	int m,data[32];
#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
#endif
	memset(data,0,sizeof(data));
	data[0]=1;data[2]=3;
	for(int i=4;i<=30;i+=2)
		data[i]=4*data[i-2]-data[i-4];
	while(scanf("%d",&m),m != -1)
	{
		if(m & 1)
			cout<<"0"<<endl;
		else
			cout<<data[m]<<endl;
	}
#ifndef ONLINE_JUDGE
    fclose(stdin);
    //fclose(stdout);
#endif
    return 0;
}
//*/