////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-03-25 11:44:12
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 1753
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:224KB
//////////////////System Comment End//////////////////
// acm.cpp : Defines the entry point for the console application.
//
///*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

void display(char s[])
{
	int flag=false,len=strlen(s);
	int i,j; 
	for(i=0;i<len && s[i]!='.';i++)
	{
		if(!flag && s[i] != '0')
			flag=true;
		if(flag)
			printf("%c",s[i]);
	}
	flag=false;
	j=i+1;
	len=i;
	while(s[j] != '\0')
	{
		if(s[j] != '0')
			len=j+1;
		j++;
	}
	for(;i<len;i++)
		printf("%c",s[i]);
	printf("\n");
}

void dec(char s1[],char s2[],char s3[])
{
	int len1=0,len2=0,len3=0,len4=0,max1,max2,i=0,up=0,temp;
	char* point1=NULL,*point2=NULL;
	char a[401],b[400];
	point1=strstr(s1,".");
	if(point1 == NULL)
	{
		len2=0;
		len1=strlen(s1);
	}
	else
	{
		len1=point1-s1;
		len2=strlen(s1)-len1-1;
	}
	point2=strstr(s2,".");
	if(point2 == NULL)
	{
		len4=0;
		len3=strlen(s2);
	}
	else
	{
		len3=point2-s2;
		len4=strlen(s2)-len3-1;
	}
	//printf("%d %d\n%d %d\n",len1,len2,len3,len4);
	if(len1 >= len3)
		max1=len1;
	else
		max1=len3;
	memset(a,'0',sizeof(a));
	memset(b,'0',sizeof(b));
	a[max1-len1+1]='\0';
	b[max1-len3+1]='\0';
	strncat(a,s1,strlen(s1));
	strncat(b,s2,strlen(s2));
	a[strlen(a)]='0';
	b[strlen(b)]='0';
	a[max1+1]='.';
	b[max1+1]='.';
	if(len2 >= len4)
		max2=len2;
	else
		max2=len4;
	a[max1+max2+2]='\0';
	b[max1+max2+2]='\0';
	//puts(a);puts(b);
	memset(s3,'0',sizeof(s3));
	i=max1+max2+2;
	up=0;
	while(i--)
	{
		if(a[i] == '.')
		{
			s3[i]='.';
			continue;
		}
		temp=a[i]-'0'+b[i]-'0'+up;
		up=temp/10;
		temp%=10;
		s3[i]=temp+'0';
	}
	s3[max1+max2+2]='\0';
}

int main()
{
	char s1[401],s2[401],s3[401];
#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
#endif
	while(scanf("%s%s",s1,s2) != EOF )
	{
		dec(s1,s2,s3);
		//puts(s3);
		display(s3);
	}
	

#ifndef ONLINE_JUDGE
    fclose(stdin);
    //fclose(stdout);
#endif
    return 0;
}
//*/