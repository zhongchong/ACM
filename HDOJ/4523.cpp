////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-03-27 18:21:04
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 4523
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

void dec(char a[],char b[],char c[])
{
	char s[101];
	int len1,len2,i,up,temp;
	len1=strlen(a);len2=strlen(b);
	memset(c,0,sizeof(c));
	if(len1 > len2 )
	{
		for(int i=0;i<len1-len2;i++)
			s[i]='0';
		for(int i=len1-len2;i<len1;i++)
			s[i]=b[i-(len1-len2)];
		s[len1]='\0';
		//puts(s);
	}
	else
		strcpy(s,b);
	i=len1;
	up=0;temp=0;
	while(i--)
	{
		temp=a[i]-s[i]+up;
		if(temp < 0)
		{
			up=-1;
			temp+=10;
		}
		else
			up=0;
		c[i]=temp+'0';
	}
	if(up < 0)
		printf("error\n");
	c[len1]='\0';
}

int comp(char s1[],char s2[])
{
	int len1,len2;
	len1=strlen(s1);
	len2=strlen(s2);
	if(len1 > len2)
		return 1;
	else if(len1 < len2)
		return -1;
	if(len1 == len2)
		return strcmp(s1,s2);
}

int main()
{
	char s1[101],s2[100],s3[100],s4[100];
	int flag;
#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
#endif
	while(scanf("%s%s%s",s1,s2,s3) != EOF )
	{
		if(comp(s1,s2) == 0)
		{
			printf("YES\n");
			continue;
		}
		if(strcmp(s2,"2") == 0 || strcmp(s2,"1") == 0)
		{
			printf("NO\n");
			continue;
		}
		if(comp(s1,s2) == -1)
		{
			dec(s2,s1,s4);
			flag=comp(s4,s3);
			if(flag == -1 || flag == 0)
				printf("YES\n");
			else
				printf("NO\n");
		}
		else if(comp(s1,s2) == 1)
		{
			//dec(s1,s2,s4);
			//flag=comp(s4,s3);
			//if(flag == -1 || flag == 0)
			//	printf("YES\n");
			//else
			//	printf("NO\n");
			printf("YES\n");
		}
	}
#ifndef ONLINE_JUDGE
    fclose(stdin);
    //fclose(stdout);
#endif
    return 0;
}
