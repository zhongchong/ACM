////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: ctguchong
////Nickname: ³ÁÄ¬µÄ´óÃàÑò
////Run ID: 
////Submit time: 2013-03-08 19:28:31
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 1713
////Problem Title: 
////Run result: Accept
////Run time:15MS
////Run memory:268KB
//////////////////System Comment End//////////////////
#include <stdio.h>
 #include <stdlib.h>
 #include <math.h>
 #include <string.h>
 
 int gcd( int x, int y )
 {
     if( y == 0 )
         return x;
     else
         return gcd( y, x % y );    
 }
 
 int lcm( int x, int y )
 {
     return x / gcd( x, y ) * y;    
 }
 
 int main()
 {
     int T;
     scanf( "%d", &T );
     while( T-- )
     {
         int a, b, c, d, rx, ry;
         scanf( "%d/%d", &a, &b );
         scanf( "%d/%d", &c, &d );
         int t = gcd( a, b );
         a /= t, b /= t;
         t = gcd( c, d ); 
         c /= t, d /= t; 
         if( gcd( b, d ) == 1 )
         {
             printf( "%d\n", lcm( a, c ) );
         }
         else
         {
             printf( "%d/%d\n", lcm( a, c ), gcd( b, d ) );
         }
     }
     return 0;
 }