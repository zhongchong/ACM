////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ��Ĭ�Ĵ�����
////Run ID: 
////Submit time: 2012-10-27 19:45:01
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 1023
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:264KB
//////////////////System Comment End//////////////////
#include <iostream>  
#include <stdio.h>  
#include <cmath>  
using namespace std;  
  
int a[105][105];    //������������  
int b[105];         //���������ĳ���  
  
void catalan()  //��������  
{  
    int i, j, len, carry, temp;  
    a[1][0] = b[1] = 1;  
    len = 1;  
    for(i = 2; i <= 100; i++)  
    {  
        for(j = 0; j < len; j++)    //�˷�  
            a[i][j] = a[i-1][j]*(4*(i-1)+2);  
        carry = 0;  
        for(j = 0; j < len; j++)    //������˽��  
        {  
            temp = a[i][j] + carry;  
            a[i][j] = temp % 10;  
            carry = temp / 10;  
        }  
        while(carry)    //��λ����  
        {  
            a[i][len++] = carry % 10;  
            carry /= 10;  
        }  
        carry = 0;  
        for(j = len-1; j >= 0; j--) //����  
        {  
            temp = carry*10 + a[i][j];  
            a[i][j] = temp/(i+1);  
            carry = temp%(i+1);  
        }  
        while(!a[i][len-1])     //��λ�㴦��  
            len --;  
        b[i] = len;  
    }  
}  
  
int main()  
{  
    int i, n;  
    catalan();  
    while(scanf("%d", &n) != EOF)  
    {  
        for(i = b[n]-1; i>=0; i--)  
        {  
            printf("%d", a[n][i]);  
        }  
        printf("\n");  
    }  
  
    return 0;  
}  