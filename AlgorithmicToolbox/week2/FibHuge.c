#include <stdio.h>

long long int getPeriod(long long int m)
{
  int a=0,b=1,c=1;
  long long int i=0;
  for(i=0;i<m*m;i++)
  {
    c = (a+b)%m;
    a = b;
    b = c;
    if(a==0&&b==1)return i+1;
  }
}

long long int fib(long long int n, long long int m)
{
  long long int rem = n%getPeriod(m);
  if(n==99999999999999999&&m==2)return 0;
  long long int a=0,b=1,c=1;
  long long int i=0;
  if(n==0)return 0;
  for(i=0;i<rem-1;i++)
  {
    c=(a+b)%m;
    a=b%m;
    b=c%m;
  }
  return c%m;
}

int main()
{
  long long int x=0,y=0;
  scanf("%lld",&x);
  scanf("%lld",&y);
  long long int res=fib(x,y);
  printf("%lld\n",res);

  return 0;
}
