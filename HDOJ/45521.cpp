////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-05-30 09:04:17
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 4552
////Problem Title: 
////Run result: Accept
////Run time:15MS
////Run memory:716KB
//////////////////System Comment End//////////////////
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>

using namespace std;

char s[100005];
int data[100005],len;

void exkmp()
{
	len=strlen(s);
	int a=0;
	data[0]=len;
	while(a<len-1 && s[a] == s[a+1])
		++a;
	data[1]=a;
	a=1;
	for(int i=2;i<len;++i)
	{
		int p=a-1+data[a],L=data[i-a];
		if(i-1+L >= p)
		{
			int j = p-(i-1) > 0 ? p-(i-1) : 0;
			while( i+j < len && s[i+j] == s[j] )
			{
				++j;
			}
			data[i]=j;
			a=i;
		}
		else
		{
			//cout<<"L="<<L<<endl;
			data[i]=L;
		}
	}
}

int main()
{
	int sum;
#ifndef	ONLINE_JUDGE
	freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
#endif
	while(scanf("%s",s) != EOF)
	{
		memset(data,0,sizeof(data));
		sum=0;
		//cout<<s;
		exkmp();
		for(int i=0;i<len;++i)
		{
			//cout<<data[i]<<' ';
			sum+=data[i];
			sum%=256;
		}
		//cout<<endl;
		printf("%d\n",sum);
	}
#ifndef	ONLINE_JUDGE
	fclose(stdin);
	//fclose(stdout);
#endif
	return 0;
}