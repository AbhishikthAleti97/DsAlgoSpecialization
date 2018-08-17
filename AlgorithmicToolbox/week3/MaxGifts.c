#include <stdio.h>
 void main()
 {
   long long int m=0;
   scanf("%lld",&m);
   if(m<3)
   {
     printf("1\n%lld",m);
   }
   else
   {
     long long int count = 1;
     while(m>count)
     {
       m = m-count;
       count = count+1;
       if(count+1>m-count)
       break;
     }
     long long int i=0;
     printf("%lld\n",count);
     for(i=1;i<count;i++)
     printf("%lld ",i);
     printf("%lld",m);
   }
 }
