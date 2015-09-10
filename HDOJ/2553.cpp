////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-05-17 11:10:33
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2553
////Problem Title: 
////Run result: Accept
////Run time:15MS
////Run memory:256KB
//////////////////System Comment End//////////////////

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int sum = 0;

void queue(int f,int* L,int *R,int* up,int *down,int num)
{
    int i = 0;
    if( num == f )
	{
		sum++;
	}
	else
    {
       for( i = 0 ; i< num ; i++)
      {
          if( L[f+i] == 0 && R[num-1-f+i] == 0 && up[i] == 0 && down[f] == 0)
          {
                   L[f+i] = 1;
                   R[num-1-f+i] = 1;
                   up[i] = 1;
                   down[f] = 1;
                   queue(f+1,L,R,up,down,num);
                   L[f+i] = 0;
                   R[num-1-f+i] = 0;
                   up[i] = 0;
                   down[f] = 0;
          }
	   }
    }
}

int main()
{
        int num=10,data[11];
		int L[20],R[20],up[20],down[20];
		for(num=1;num<=10;++num){
            sum=0;
			memset(L,0,sizeof(L));
			memset(R,0,sizeof(R));
			memset(up,0,sizeof(up));
			memset(down,0,sizeof(down));
            queue(0,L,R,up,down,num);
            data[num]=sum;
        }
		while(scanf("%d",&num) , num!=0)
			printf("%d\n",data[num]);
        return 0;
}