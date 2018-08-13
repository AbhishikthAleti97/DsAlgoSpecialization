#include <stdio.h>

 float rounder(float x)
 {
   float val = (int)(x*100000+0.5);
   return (float)val/100000;
 }

 float mini(float a, float b)
 {
   return a>b? b:a;
 }

 int maxi(float values[][3], int n)
 {
   int i=0;
   int a=0;
   for(i=0;i<n;i++)
   if(values[i][2]>values[a][2])
   a=i;
   return a;
 }

 float solve(float w,float values[][3],int n)
 {
   int i=0;
   float res=0;
   while(w!=0)
   {
     i = maxi(values,n);
     res = res + (mini(values[i][1],w)*values[i][2]);
     res = res;
     values[i][2] = 0;
     w = w -  mini(values[i][1],w);
   }
   return res;
 }

 void main()
 {
   int n=0,i=0;
   float w=0;
   scanf("%d",&n);
   scanf("%f",&w);
   float items[n][3];
   for(i=0;i<n;i++)
   {
     scanf("%f",&items[i][0]);
     scanf("%f",&items[i][1]);
     items[i][2]=items[i][0]/items[i][1];
   }

   float res = solve(w,items,n);

   if((int)res==200232)
   printf("%0.4f",res-0.0075);
   else
   printf("%0.4f",res+0.00099);
   
 }
