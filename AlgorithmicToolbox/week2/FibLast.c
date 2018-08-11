#include <stdio.h>
long long int fib(long long int n)
{
  long long int a=0,b=1,c=1;
  long long int i=0;
  if(n==0)return 0;
  for(i=1;i<n;i++)
  {
    c=(a+b)%10;
    a=b%10;
    b=c%10;
  }
  return c;
}

int main()
{
  long long int x=0;
  scanf("%lld",&x);
  long long int res=fib(x);
  printf("%lld",res);
  return 0;
}
