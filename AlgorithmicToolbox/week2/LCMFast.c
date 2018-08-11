#include <stdio.h>

long long int gcd(long long int a, long long int b)
{
  if(b>a)
  {
    long long int temp = a;
    a = b;
    b = temp;
    return gcd(a,b);
  }
  if(b==0)return a;
  return gcd(a%b,b);
}

int main()
{
  long long int x=0;
  long long int y=0;
  scanf("%lld",&x);
  scanf("%lld",&y);
  long long int res = (x*y)/gcd(x,y);
  printf("%lld",res);
  return 0;
}
