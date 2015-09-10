////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2012-10-27 20:55:45
////Compiler: GUN C
//////////////////////////////////////////////////////
////Problem ID: 1002
////Problem Title: 
////Run result: Accept
////Run time:15MS
////Run memory:204KB
//////////////////System Comment End//////////////////
#include<stdio.h>
#include"string.h"
#define max 1000+10
char a[max],b[max];
int main()
{       int  i,j,T,k;
        scanf("%d",&T);
       for(k=0;k<T;k++)
          {   int A[max]={0},B[max]={0};
              scanf("%s%s",a,b);
            int x=strlen(a);
            int y=strlen(b);
            for(i=0;i<x;i++)A[i]=a[x-1-i]-'0';
            for(i=0;i<y;i++)B[i]=b[y-1-i]-'0';
            int c=0;
            for(i=0;i<max;i++)
             {  int s=(A[i]+B[i]+c);
                A[i]=s%10;
                c=s/10;
             }
            printf("Case %d:\n%s + %s = ",k+1,a,b);
            for( i=max-1;i>=0;i--) if(A[i])break;
           for(j=i;j>=0;j--)      printf("%d",A[j]);
           printf("\n");
            if(k<T-1)
               printf("\n");
         }
     return 0;
}