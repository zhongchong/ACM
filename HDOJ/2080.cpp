////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2014-10-26 19:14:43
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 2080
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:360KB
//////////////////System Comment End//////////////////
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cmath>

#define PI 3.141592653

using namespace std;

int main()
{


    int T;
    double x1,y1,x2,y2;
    double res=0, a=0, b=0, anch=0;
    cin>>T;
    while(T--)
    {
        cin>>x1>>y1>>x2>>y2;
        res = x1*x2 + y1*y2;
        anch = 0;

        a = pow(fabs(x1),2)+pow(fabs(y1),2);
        b = pow(fabs(x2),2)+pow(fabs(y2),2);
        anch = acos( res/sqrt(a*b) ) *180/PI;
        printf("%.2f\n",anch);
    }





    return 0;
}
