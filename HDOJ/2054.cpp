////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-03-07 18:03:19
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2054
////Problem Title: 
////Run result: Accept
////Run time:15MS
////Run memory:328KB
//////////////////System Comment End//////////////////
// acm.cpp : Defines the entry point for the console application.
//
///*
#include<stdio.h>
#include<stdlib.h>
#include <string.h>

char a[50000],b[50000];

void deal(char *t)
{
	char ch[50000],*s,*m=NULL;
	int flag=0,flag2=0;
	s=ch;
	m=strstr(t,".");
	if(m != NULL)
	{
		m=t+strlen(t)-1;
		while(*m == '0' && m != t)
		{
			*m='\0';
			m--;
		}
		if(*m == '0')
			*m='\0';
	}
	else
		flag2=1;
	m=t;
	while(*m != '\0')
	{
		if(*m != '+' && *m != '-')
		{
			if(*m != '0')
				flag=1;
			if(flag)
			{
				*s=*m;
				s++;
			}
		}
		m++;
	}
	if(flag2)
	{
		*s='.';
		s++;
	}
	*s='\0';
	strcpy(t,ch);
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
#endif
	while(scanf("%s%s",&a,&b) != EOF)
	{
		deal(a);
		deal(b);
		//printf("%s %s",a,b);
		if(strcmp(a,b) == 0)
			printf("YES\n");
		else
			printf("NO\n");
	}
	
#ifndef ONLINE_JUDGE
	fclose(stdin);
	//fclose(stdout);
#endif
	return 0;
}
//*/
