////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2012-11-12 15:11:13
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 2516
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:192KB
//////////////////System Comment End//////////////////
#include<stdio.h>

int g[50];
int main()
{
g[1]=2;g[2]=3;
for(int i=3;i<50;i++)
g[i]=g[i-1]+g[i-2];
int n;
while(scanf("%d",&n)&&n)
{
int flag=0;
for(int i=1;i<50;i++)
if(g[i]==n)
{
flag=1;
break;
}
if(flag==1)
printf("Second win\n");
else
printf("First win\n");
}
return 0;
}