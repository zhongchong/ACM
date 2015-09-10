////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-03-27 18:18:31
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 4510
////Problem Title: 
////Run result: Accept
////Run time:15MS
////Run memory:228KB
//////////////////System Comment End//////////////////
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
	int N,hour1,min1,sec1;
	int hour2,min2,sec2;
#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
#endif
	scanf("%d",&N);
	while(N--)
	{
		scanf("%d:%d:%d",&hour1,&min1,&sec1);
		scanf("%d:%d:%d",&hour2,&min2,&sec2);
		//printf("%d %d %d %d %d %d",hour1,min1,sec1,hour2,min2,sec2);
		sec1-=sec2;
		if(sec1<0)
		{
			min1--;
			sec1+=60;
		}
		min1-=min2;
		if(min1<0)
		{
			hour1--;
			min1+=60;
		}
		if(hour1<0)
			hour1+=12;
		hour2%=12;
		hour1-=hour2;
		if(hour1<0)
			hour1+=12;
		printf("%02d:%02d:%02d\n",hour1,min1,sec1);
	}

#ifndef ONLINE_JUDGE
    fclose(stdin);
    //fclose(stdout);
#endif
    return 0;
}
//*/