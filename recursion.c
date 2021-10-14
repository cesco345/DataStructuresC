 #include <stdio.h>
 2
 3 int F( int X )
 4 {
 5     if( X == 0 )
 6         return 0;
 7     else
 8         return 2 * F( X - 1 ) + X * X;
 9 }
10
11 main( )
12 {
13     printf( "F(5) = %d\n", F( 5 ) );
14     return 0;
15 }
