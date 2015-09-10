////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-05-23 14:41:52
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 4554
////Problem Title: 
////Run result: Accept
////Run time:93MS
////Run memory:292KB
//////////////////System Comment End//////////////////
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>

using namespace std;

int reverse(int t)
{
	bool flag=true;
	if(t < 0)
	{
		flag=false;
		t=abs(t);
	}
	int data[10],len=0,ans=0;
	for(;t;t/=10)
		data[len++]=t%10;
	for(int i=0;i<len;++i)
		ans=ans*10+data[i];
	return flag?ans:(-1)*ans;
}

void caculate(const int& a,const int& b)
{
	int m,n;
	m=(a+b)/2;
	n=(a-b)/2;
	m=reverse(m);
	n=reverse(n);
	cout<<m+n<<' '<<m-n<<endl;
}

int main()
{
	int T,a,b;
#ifndef	ONLINE_JUDGE
	freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
#endif
	cin>>T;
	while(T--)
	{
		cin>>a>>b;
		caculate(a,b);
	}
	//cout<<reverse(0)<<endl;
#ifndef	ONLINE_JUDGE
	fclose(stdin);
	//fclose(stdout);
#endif
	return 0;
}