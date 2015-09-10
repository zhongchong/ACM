////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: 沉默的大绵羊
////Run ID: 
////Submit time: 2014-01-22 20:10:02
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 1421
////Problem Title: 
////Run result: Accept
////Run time:218MS
////Run memory:8088KB
//////////////////System Comment End//////////////////
#include<stdio.h>
#include<algorithm>
#define min(a,b) a<b?a:b
int n,k;
int thing[2001];
int select[2001][1001];
int cmp(const void *a,const void *b)
{
	return *((int*)a)-*((int*)b);
}
int dp()
{
	qsort(thing+1,n,sizeof(int),cmp);//排序错一个花费我好几个小时
	select[0][0]=0;
	for(int j=1;j<=n;j++)
	{
		select[j][0]=0;
		for(int i=1;i<=j/2;i++)
		{
			if(j-1>=2*i)
			{
				select[j][i]=min(select[j-1][i],select[j-2][i-1]+(thing[j]-thing[j-1])*(thing[j]-thing[j-1]));
			}
			else
				select[j][i]=select[j-2][i-1]+(thing[j]-thing[j-1])*(thing[j]-thing[j-1]);
		}
	}
	printf("%d\n",select[n][k]);
	return 0;
}
int main()
{
	while(scanf("%d%d",&n,&k)!=EOF&&n>=2*k&&n<2000&&k>=1)
	{
		for(int i=1;i<=n;i++)
			scanf("%d",&thing[i]);
		dp();
	}
	return 0;
}