#include <stdio.h>
long long int fib(long long int n)
{
  long long int a=0,b=1,c=1,s=0;
  long long int i=0;
  long long int y[60];
  if(n==0)return 0;
  y[0]=0;
  y[1]=1;
  for(i=2;i<60;i++)
  {
    {
      c=(a+b)%10;
      a=b%10;
      b=c%10;
      y[i]=(y[i-1]+c)%10;
    }
  }
  return y[n%60];
}

int main()
{
  long long int x=0;
  scanf("%lld",&x);
  long long int res=fib(x);
  printf("%lld",res);
  return 0;
}
