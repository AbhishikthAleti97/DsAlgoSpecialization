#include <stdio.h>
long long int fib(long long int n, long long int m)
{
  long long int a=0,b=1,c=1,s=0;
  long long int i=0;
  long long int y[60];
  y[0]=0;
  y[1]=1;
  for(i=2;i<60;i++)
  {
      y[i]=(y[i-1]+y[i-2]);
  }
  n = n%60;
  m = m%60;
  if(m<n)
  m = m+60;
  for(i=n;i<m+1;i++)
  s = (s+y[i%60]);
  return s%10;
}

int main()
{
  long long int x=0;
  scanf("%lld",&x);
  long long int y=0;
  scanf("%lld",&y);

  long long int res=fib(x,y);
  printf("%lld",res);
  return 0;
}
