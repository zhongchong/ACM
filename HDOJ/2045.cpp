////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ��Ĭ�Ĵ�����
////Run ID: 
////Submit time: 2012-11-29 21:27:23
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2045
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:284KB
//////////////////System Comment End//////////////////
/*
���ų�һ�еģ�������ú�(Red)����(Pink)����(Green)��ɫͿÿ�����ӣ�
ÿ��Ϳһɫ��Ҫ���κ����ڵķ�����ͬɫ������β����Ҳ��ͬɫ����ȫ��������Ҫ���Ϳ����
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i;
	_int64 data[50];
	data[0]=3;
	data[1]=6;
	data[2]=6;
	for(i=3;i<50;i++)
		data[i]=data[i-1]+2*data[i-2];
	//freopen("in.txt","r",stdin);
	while( scanf("%d",&n) != EOF ){
		printf("%I64d\n",data[n-1]);
	}
	//fclose(stdin);
	return 0;
}