#include <stdio.h>
#include <stdlib.h>

 static long long int comp(const void* p1, const void* p2) {
   long long int* arr1 = (long long int*)p1;
   long long int* arr2 = (long long int*)p2;
   return arr1[1] > arr2[1];
 }



 void main()
 {
   int n=0,i=0;
   scanf("%d",&n);
   long long int a[n][2],res[n],cur=0;
   for(i=0;i<n;i++)
   {
     scanf("%lld %lld",&a[i][0],&a[i][1]);
   }
   qsort(a,n,2*sizeof(long long int),comp);
   
   long long int end = a[0][1];
   for(i=0;i<n;i++)
   {
     if(a[i][0]>end||end>a[i][1])
     {
       res[cur++]=end;
       end=a[i][1];
     }
   }
   res[cur++]=end;

   //
   printf("%lld\n",cur);
   for(i=0;i<cur;i++)
   printf("%lld ",res[i]);


 }
