////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-05-10 15:04:45
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2069
////Problem Title: 
////Run result: Accept
////Run time:125MS
////Run memory:328KB
//////////////////System Comment End//////////////////
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>

using namespace std;

int total(int n)
{
	int sum=0;
	for(int i=0;i<=n/1 && i<= 100;++i)
		for(int j=0;j<=(n-i*1) && j<=100;++j)
			for(int k=0;k<=(n-i*1-j*5)/10 && k<=100;++k)
				for(int p=0;p<=(n-i-j*5-k*10)/25 && p<=100;++p)
					for(int q=0;q<=(n-i-j*5-k*10-p*25)/50 && q <=100 ;++q)
					{
						if(i+j+k+p+q<=100 && i*1+j*5+k*10+p*25+q*50 == n)
							sum++;
					}
	return sum;
}

int main()
{
	int n;
#ifndef	ONLINE_JUDGE
	freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
#endif
	while(cin>>n)
	{
		cout<<total(n)<<endl;
	}
#ifndef	ONLINE_JUDGE
	fclose(stdin);
	//fclose(stdout);
#endif
	return 0;
}