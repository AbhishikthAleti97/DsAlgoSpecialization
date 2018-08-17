#include <stdlib.h>
#include <stdio.h>
#include <string.h>

  int comp(const void* p, const void* q)
  {
    char qp[64];
    char pq[64];
    sprintf(qp,"%d%d",*(int*)p,*(int*)q);
    sprintf(pq,"%d%d",*(int*)q,*(int*)p);
    return strcmp(pq,qp);
  }
  void maximNumber(int a[], int n)
  {
    int i;

    qsort(a,n,sizeof(int),comp);
    for(i=0;i<n;i++)
    printf("%d",a[i]);
  }

 void main()
 {
   int m=0;
   scanf("%d",&m);
   int digits[m];
   int i=0;
   for(i=0;i<m;i++)
   scanf("%d",&digits[i]);

   maximNumber(digits,m);
 }
