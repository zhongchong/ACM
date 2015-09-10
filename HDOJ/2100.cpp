////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-03-27 12:58:18
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2100
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:228KB
//////////////////System Comment End//////////////////
// acm.cpp : Defines the entry point for the console application.
//
///*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define M 201

char a[M],b[M],c[M];

void add()
{
	int up=0,temp=0;
	for(int i=M-2;i>=0;i--)
	{
		temp=a[i]-'A'+b[i]-'A'+up;
		up=temp/26;
		temp%=26;
		c[i]=temp+'A';
	}
	if(up > 0)
		printf("overflow\n");
}

void display()
{
	bool flag=false;
	for(int i=0;i<M-1;i++)
	{
		if(!flag && c[i] != 'A')
			flag=true;
		if(flag)
			printf("%c",c[i]);
	}
	if(!flag)
		printf("A");
	printf("\n");
}

int main()
{
	char s1[M],s2[M];

#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
#endif
	while(scanf("%s%s",s1,s2) != EOF)
	{
		memset(a,'A',sizeof(a));
		memset(b,'A',sizeof(b));
		memset(c,'A',sizeof(c));
		c[M-1]='\0';
		a[M-strlen(s1)-1]='\0';
		b[M-strlen(s2)-1]='\0';
		strcat(a,s1);
		strcat(b,s2);
		//puts(a);
		//puts(b);
		add();
		display();
	}

#ifndef ONLINE_JUDGE
    fclose(stdin);
    //fclose(stdout);
#endif
    return 0;
}
//*/