#include <stdio.h>
#include <math.h>

long long int fib(long long int m)
{
  int c=1;
  long long int i=0;
  long long int k[60],l[100],s[100];
  k[0]=0;
  k[1]=1;
  for(i=2;i<60;i++)
  {
    k[i]=k[i-1]+k[i-2];
    k[i]=k[i]%10;
  }
  l[0]=0;
  l[1]=1;
  s[0]=0;
  s[1]=1;
  for(i=2;i<100;i++)
  {
    l[i]=(k[i-1]+k[i-2])%10;
    l[i]=(l[i]*l[i])%10;
    s[i]=(s[i-1]+l[i])%10;
    if(s[i]==1&&s[i-1]==0)break;
  }
  return s[m%(i-1)];
}


int main()
{
  long long int x=0;
  scanf("%lld",&x);
  long long int res=fib(x);
  printf("%lld\n",res);

  return 0;
}
