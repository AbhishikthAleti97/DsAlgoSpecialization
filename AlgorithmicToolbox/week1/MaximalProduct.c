#include <stdio.h>

void main(void)
{
  long long int n;
  scanf("%lld",&n);
  long long int a[n];
  long long int max1=0,i=0;
  long long int max2=0;
  for(i=0;i<n;i++)
  {
    scanf("%lld",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    if(a[i]>max1)
    {
      max2=max1;
      max1=a[i];
    }
    else if(a[i]>max2)
    {
     max2=a[i];
    }
  }
  long long int res =0;
  res = max1*max2;
  printf("%lld",res);

}
