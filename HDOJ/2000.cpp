////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2012-11-15 11:07:56
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2000
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:228KB
//////////////////System Comment End//////////////////
#include<stdio.h>
#include<stdlib.h>

int comp(const void* a,const void* b)
{
	return *(char*)a-*(char*)b;
}

int main()
{
	char ch[4]={'q','w','c','\0'};
	int i;
	
	while( scanf("%s",ch) != EOF){
		qsort(ch,3,sizeof(char),comp);
		printf("%c %c %c\n",*ch,*(ch+1),*(ch+2));
	}
	return 0;
}