////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-05-31 19:46:07
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2022
////Problem Title: 
////Run result: Accept
////Run time:15MS
////Run memory:296KB
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
	int m,n;
	int row,col,max;
#ifndef	ONLINE_JUDGE
	freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
#endif
	while(scanf("%d%d",&m,&n) != EOF)
	{
		int tem;
		row=0;col=0;max=0;
		for(int i=0;i<m;++i)
			for(int j=0;j<n;++j)
			{
				cin>>tem;
				if(abs(tem) > abs(max))
				{
					max=tem;
					row=i;
					col=j;
				}
			}
		cout<<row+1<<' '<<col+1<<' '<<max<<endl;
	}
#ifndef	ONLINE_JUDGE
	fclose(stdin);
	//fclose(stdout);
#endif

	return 0;
}