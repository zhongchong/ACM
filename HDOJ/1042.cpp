////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-03-22 20:32:08
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 1042
////Problem Title: 
////Run result: Accept
////Run time:1125MS
////Run memory:288KB
//////////////////System Comment End//////////////////
#include<iostream>
using namespace std;
int a[8001],n;
int main()
{
    while(scanf("%d",&n)!=EOF)
    {
        int i,j;
        memset(a,0,sizeof(a));
        for(i=2,a[0]=1;i<=n;i++)
        {
            for(j=0;j<8000;j++) a[j]*=i;    
            for(j=0;j<8000;j++)
            {
                a[j+1]+=a[j]/100000;
                a[j]%=100000;
            }
        }    
        for(i=8000;i>=0&&!a[i];i--);
        printf("%d",a[i--]);
        for(;i>=0;i--) printf("%05d",a[i]);
        printf("\n");
    }
    return 0;
}