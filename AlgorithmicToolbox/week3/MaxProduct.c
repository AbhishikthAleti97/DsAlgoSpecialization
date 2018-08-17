#include <stdio.h>

 int maxi(long long int a[],int n)
 {
   int x=0;
   int i=0;
   for(i=0;i<n;i++)
   {
     if(a[i]>a[x])
     x=i;
   }
   return x;
 }

 void main()
 {
   int n=0;
   scanf("%d",&n);
   long long int a[n],b[n];
   int i=0,j=0,k=0;
   for(i=0;i<n;i++)
   {
     scanf("%lld",&a[i]);
   }
   for(i=0;i<n;i++)
   {
     scanf("%lld",&b[i]);
   }

   long long int res = 0;
   for(i=0;i<n;i++)
   {
     j = maxi(a,n);
     k = maxi(b,n);
     res = res + a[j]*b[k];
     a[j] = -99999999;
     b[k] = -99999999;
   }
   printf("%lld",res);
 }
