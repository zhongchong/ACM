////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2014-06-27 21:39:32
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 2043
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:344KB
//////////////////System Comment End//////////////////
#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>

using namespace std;

int getType(char passwd[], int& count)
{
    int count1=0, count2=0, count3=0, count4=0;
    int len=strlen(passwd);
    char ch[7]={'~','!','@','#','$','%','^'};
    for(int i=0; i<len; ++i)
    {
        if(passwd[i]>= 'A' &&passwd[i]<='Z')
            ++count1;
        else if(passwd[i]>='a' && passwd[i]<='z')
            ++count2;
        else if(passwd[i]>='0' && passwd[i]<='9')
            ++count3;
        for(int j=0; j<7; ++j)
            if(passwd[i]==ch[j])
            {
                count4++;
                break;
            }
    }
    count=0;
    if(count1)
        ++count;
    if(count2)
        ++count;
    if(count3)
        ++count;
    if(count4)
        ++count;
    return 0;
}

int main()
{

    int N;
    char passwd[50];
    cin>>N;
    while(N--)
    {
        memset(passwd,0,sizeof(passwd));
        cin>>passwd;
        int count=0, len=strlen(passwd);
        if(len>=8 && len<=16)
        {
            getType(passwd,count);
            if(count>=3)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<endl;
        //printf("len=%d type=%d\n",len,count);
    }

    
    return 0;
}
