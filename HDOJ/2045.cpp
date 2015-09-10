////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: 沉默的大绵羊
////Run ID: 
////Submit time: 2012-11-29 21:27:23
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2045
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:284KB
//////////////////System Comment End//////////////////
/*
有排成一行的ｎ个方格，用红(Red)、粉(Pink)、绿(Green)三色涂每个格子，
每格涂一色，要求任何相邻的方格不能同色，且首尾两格也不同色．求全部的满足要求的涂法。
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i;
	_int64 data[50];
	data[0]=3;
	data[1]=6;
	data[2]=6;
	for(i=3;i<50;i++)
		data[i]=data[i-1]+2*data[i-2];
	//freopen("in.txt","r",stdin);
	while( scanf("%d",&n) != EOF ){
		printf("%I64d\n",data[n-1]);
	}
	//fclose(stdin);
	return 0;
}