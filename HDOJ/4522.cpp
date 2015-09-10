////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-03-30 13:42:34
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 4522
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:304KB
//////////////////System Comment End//////////////////
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <queue>
#include <algorithm>
#define maxn 100010
using namespace std;
struct edge
{
    int to;
    int next;
}e[2][maxn<<1];
int box[2][210],cnt[2],dist[2][210],c[2][210],inf;
void init()
{
    memset(box,-1,sizeof(box));
    memset(dist,1,sizeof(dist));
    memset(c,0,sizeof(dist));
    inf=dist[0][0];
    cnt[0]=cnt[1]=0;
}
void add(int from,int to,int t)
{
    e[t][cnt[t]].to=to;
    e[t][cnt[t]].next=box[t][from];
    box[t][from]=cnt[t]++;
}
char str[10010];
void makemap(int t)
{
    int len=strlen(str),i;
    str[len]='+';
    str[++len]='\0';
    int from=0,to=0,tmp=0;
    for(i=0;i<len;i++)
    {
        if(str[i]=='+')
        {
            if(from!=0)
            {
                if(t)
                add(from,tmp,1);
                add(from,tmp,0);
            }
            from=tmp;
            tmp=0;
        }
        else
        tmp=10*tmp+str[i]-'0';
    }
}
void spfa(int s,int tt)
{
    queue<int> q;
    dist[tt][s]=0;
    c[tt][s]=1;
    q.push(s);
    while(!q.empty())
    {
        int now=q.front();
        q.pop();
        c[tt][now]=0;
        int t,v;
        for(t=box[tt][now];t+1;t=e[tt][t].next)
        {
            v=e[tt][t].to;
            if(dist[tt][v]>dist[tt][now]+1)
            {
                dist[tt][v]=dist[tt][now]+1;
                if(!c[tt][v])
                {
                    c[tt][v]=1;
                    q.push(v);
                }
            }
        }
    }
}
long long min(long long a,long long b)
{
    return a<b?a:b;
}
int main()
{
    //freopen("dd.txt","r",stdin);
    int ncase;
    scanf("%d",&ncase);
    while(ncase--)
    {
        int n,t,flag;
        init();
        scanf("%d%d",&n,&t);
        while(t--)
        {
            scanf("%s%d",str,&flag);
            makemap(flag);
        }
        int c1,c2;
        scanf("%d%d",&c1,&c2);
        int S,T;
        scanf("%d%d",&S,&T);
        spfa(S,0);
        spfa(S,1);
        long long t1=dist[0][T],t2=dist[1][T];
        if(t1==inf&&t2==inf)
        printf("-1\n");
        else
        {
            printf("%I64d\n",min(c1*t1,c2*t2));
        }
    }
    return 0;
}