////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2015-03-30 14:57:38
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 1232
////Problem Title: 
////Run result: Accept
////Run time:46MS
////Run memory:1696KB
//////////////////System Comment End//////////////////
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>

using namespace std;

vector<int> road;
int N,M;

int find(int n)
{
	if( road.at(n) == n)
		return n;
	else
		return find(road.at(n));
}

void add(int x,int y)
{
	x = find(x);
	y = find(y);
	if(x != y)
		road.at(y) = x;
}

void init()
{
	road.resize(N);
	for(int i=0;i<N;++i )
	{
		road.at(i) = i;
	}
	int a,b;
	for(int i=0;i<M;++i)
	{
		scanf("%d%d",&a,&b);
		add(a-1,b-1);
	}
}

int getCount()
{
	int count=0;
	for(int i=0;i<N;++i)
	{
		if(road.at(i) == i)
			++count;
	}
	return count-1;
}

int main()
{

	while(cin>>N>>M, N != 0)
	{
		init();
		cout<<getCount()<<endl;
	}


	return 0;
}