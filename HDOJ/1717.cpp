////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-03-11 16:51:40
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 1717
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:308KB
//////////////////System Comment End//////////////////
// acm.cpp : Defines the entry point for the console application.
//
///*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int gcd(int a,int b)
{
	return b==0?a:gcd(b,a%b);
}

void deal(char* s,int* a,int* b,int* c,int* d)
{
	char ch[100],*temp;
	int flag1=0,flag2=0;
	temp=ch;
	*c=0;*d=0;
	while(*s != '\0')
	{
		if(flag2)
		{
			switch(*s)
			{
			case ')':
				*temp='\0';
				*d=strlen(ch);
				*b=atoi(ch);
				temp=ch;
				flag2=0;
				break;
			default:
				*temp=*s;
				temp++;
				break;
			}
		}
		if(flag1)
		{
			switch(*s)
			{
			case '(':
				*temp='\0';
				if(*ch != '\0')
				{
					*c=strlen(ch);
					*a=atoi(ch);
				}
				else
					*a=0;
				temp=ch;
				flag1=0;
				flag2=1;
				break;
			default:
				*temp=*s;
				temp++;
				break;
			}
		}
		if(*s == '.')
		{
			flag1=1;
		}
		s++;
	}
	if(flag1)
	{
		*temp='\0';
		*c=strlen(ch);
		*a=atoi(ch);
		*b=0;
		temp=NULL;
		flag1=0;
	}
}

int main()
{
	int N,a=0,b=0,c=0,d=0,t1=0,t2=0,t;
	char s[100];
#ifndef ONLINE_JUDGE
	freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
#endif
	scanf("%d",&N);
	while(N--)
	{
		scanf("%s",s);
		deal(s,&a,&b,&c,&d);
		if(b == 0)
		{
			t1=a;
			t2=(int)pow((double)10,(double)c);
		}
		else
		{
			t2=(int)pow((double)10,(double)c+(double)d);
			t2-=(int)pow((double)10,(double)c);
			t1=a*(int)pow((double)10,(double)d)+b;
			t1-=a;
		}
		t=gcd(t1,t2);
		printf("%d/%d\n",t1/t,t2/t);
		
	}
#ifndef ONLINE_JUDGE
	fclose(stdin);
	//fclose(stdout);
#endif
	return 0;
}
//*/