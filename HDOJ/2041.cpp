////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-03-13 18:18:51
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2041
////Problem Title: 
////Run result: Accept
////Run time:15MS
////Run memory:268KB
//////////////////System Comment End//////////////////
// acm.cpp : Defines the entry point for the console application.
//
///*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int data[40]={
	102334155,63245986,39088169,24157817,14930352,9227465,
5702887,3524578,2178309,1346269,832040,514229,
317811,196418,121393,75025,46368,28657,17711,
10946,6765,4181,2584,1597,
987,610,377,233,144,89,55,
34,21,13,8,5,3,2,1,1,
};

int main()
{
    int N,m,num;
#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
#endif
    scanf("%d",&N);
    while(N--)
    {
        num=0;
        scanf("%d",&m);
        printf("%d\n",data[40-m]);
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    //fclose(stdout);
#endif
    return 0;
}
//*/