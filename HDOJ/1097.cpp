////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2015-01-09 16:08:48
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 1097
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:1136KB
//////////////////System Comment End//////////////////
#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <cmath>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <memory>

using namespace std;

int main()
{

	int data[10][10] = 
	{
		{1,0},{1,1},{4,2,4,8,6},{4,3,9,7,1},{2,4,6},{1,5},{1,6},{4,7,9,3,1},{4,8,4,2,6},{2,9,1}
	};
	int a,b;
	a = b = 0;
	while(scanf("%d%d",&a,&b) !=EOF)
	{
		a = a % 10;
		b = b % data[a][0];
		if(b == 0)
			cout<<data[a][ data[a][0] ]<<endl;
		else
			cout<<data[a][b]<<endl;
	}



	return 0;
}