////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-03-06 09:16:53
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2005
////Problem Title: 
////Run result: Accept
////Run time:15MS
////Run memory:244KB
//////////////////System Comment End//////////////////
// acm.cpp : Defines the entry point for the console application.
//

#include<stdio.h>
#include<stdlib.h>

int data1[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int data2[12]={31,29,31,30,31,30,31,31,30,31,30,31};

bool runyear(int m)
{
	return m%100==0?(m%400==0?1:0):(m%4==0?1:0);
}

void getstring(char *s,int& year,int& month,int& day)
{
	char temp[10],*point;
	int i,data[3]={0,0,0};
	point=temp;
	i=0;
	while(*s != '\0')
	{
		switch(*s)
		{
		case '/':*point='\0';data[i]=atoi(temp);i++;point=temp;break;
		default:*point=*s;point++;break;
		}
		s++;
	}
	*point='\0';
	data[i]=atoi(temp);
	year=data[0];
	month=data[1];
	day=data[2];
}

int main()
{
	char s[100];
	int year,month,day;
#ifndef ONLINE_JUDGE
	freopen("in.txt","r",stdin);
#endif

	while(scanf("%s",s) != EOF)
	{
		getstring(s,year,month,day);
		//printf("%d %d %d\n",year,month,day);
		if(runyear(year))
		{
			for(int i=0;i<month-1;i++)
				day+=data2[i];
		}
		else
		{
			for(int i=0;i<month-1;i++)
				day+=data1[i];
		}
		printf("%d\n",day);
	}


#ifndef ONLINE_JUDGE
	fclose(stdin);
#endif
	return 0;
}

