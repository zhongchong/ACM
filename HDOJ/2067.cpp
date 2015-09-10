////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-04-12 17:08:18
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2067
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:232KB
//////////////////System Comment End//////////////////
#include<stdio.h> 
#include<stdlib.h>
#include<string.h>
__int64 data[36]; 
 int main() 
{  int i=1; 
__int64 n; 
memset(data,0,sizeof(data));
 data[0]=1;  data[1]=1;
for(i=2;i<=35;++i)
for(int j=0;j<i;++j)
{
data[i]+=data[j]*data[i-1-j];
}
 i=1; 
 while(scanf("%I64d",&n),n!=-1)
 printf("%d %I64d %I64d\n",i++,n,2*data[n]);
 
 return 0; 
 }