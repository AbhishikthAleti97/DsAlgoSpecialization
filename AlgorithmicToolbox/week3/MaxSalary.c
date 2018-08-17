#include <stdio.h>
#include <string.h>
//hasn't passed the mysterious case 9, weird. Check the other solution, this one's mathematical, the other one(LargestNumber.c) uses a tricky sorting.
  int power(int a, int b)
  {
    int i=0,res=1;
    for(i=0;i<b;i++)
    res = res*a;
    return res;
  }

  int no_dig(long long int a)
  {
    int count=0;
    while(a>0)
    {
      count=count+1;
      a = a/10;
    }
    return count;
  }

  long long int dig(long long int a, long long int b)
  {
    if(no_dig(a)==no_dig(b))return (a>b)? a:b;
    else
    {
      if(a<b)
      {
        long long int temp=b;
        b=a;
        a=temp;
      }
      int x_a = (int)power(10,no_dig(a)-1);
      int x_b = (int)power(10,no_dig(b)-1);
      int x_c = (int)power(10,no_dig(b));
      if((a/x_a)>(b/x_b)) return a;
      else if((a/x_a)<(b/x_b)) return b;
      else if((a%(x_c))>b) return a;
      else return b;
    }
  }

 int maxim(long long int array[],int n)
 {
  int i=0,maxy=0;
  for(i=0;i<n;i++)
  {
    int num = dig(array[i],array[maxy]);
    if(num==array[i])maxy=i;

  }
  return maxy;
 }

 void main()
 {
   int m=0;
   scanf("%d",&m);
   long long int digits[m];
   int i=0;
   for(i=0;i<m;i++)
   scanf("%lld",&digits[i]);

   long long int res=0;
   char result[10000]="";
   for(i=0;i<m;i++)
   {
     char resu[5];
     int x = maxim(digits,m);
     sprintf(resu,"%lld",digits[x]);
     strcat(result,resu);
     digits[x]=0;
   }
   printf("%s",result);
 }
