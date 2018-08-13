#include <stdio.h>
 int change(int m)
 {
   int n = (m-(m%10))/10;
   int o = (m%10)/5;
   int p = (m%10)%5;
   return n+o+p;
 }
 void main()
 {
   int m=0;
   scanf("%d",&m);
   int res = change(m);
   printf("%d",res);
 }
