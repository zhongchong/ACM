////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2014-07-20 10:48:54
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2056
////Problem Title: 
////Run result: Accept
////Run time:15MS
////Run memory:248KB
//////////////////System Comment End//////////////////
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
#include<cmath>

using namespace std;

int main()
{


    double x1, y1, x2, y2, x3, y3, x4, y4;
    double res;
    while(scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4) != EOF)
    {
        res = 0.0;

        double length1, height1;
        double length2, height2;
        double length3, height3;
        double length, height;
        length = fabs(x1 - x2) + fabs(x3 - x4);
        height = fabs(y1 - y2) + fabs(y3 - y4);

        length1 = fabs(x1 - x3) > fabs(x1 - x4) ? fabs(x1 - x3): fabs(x1 - x4);
        length2 = fabs(x2 - x3) > fabs(x2 - x4) ? fabs(x2 - x3): fabs(x2 - x4);
        length3 = fabs(x1 - x2) > fabs(x3 - x4) ? fabs(x1 - x2): fabs(x3 - x4);
        length1 = length1 > length2 ? length1: length2;
        length1 = length1 > length3 ? length1: length3;
        height1 = fabs(y1 - y3) > fabs(y1 - y4) ? fabs(y1 - y3): fabs(y1 - y4);
        height2 = fabs(y2 - y3) > fabs(y2 - y4) ? fabs(y2 - y3): fabs(y2 - y4);
        height3 = fabs(y1 - y2) > fabs(y3 - y4) ? fabs(y1 - y2): fabs(y3 - y4);
        height1 = height1 > height2 ? height1: height2;
        height1 = height1 > height3 ? height1: height3;

        if(length > length1)
            length = fabs(length - length1);
        else
            length = 0.0;
        if(height > height1)
            height = fabs(height - height1);
        else
            height = 0.0;

        res = length * height;
        printf("%.2lf\n",res);
    }


    return 0;
}
