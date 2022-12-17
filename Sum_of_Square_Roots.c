#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,j;
    float k=0;
    scanf("%d%d",&n,&j);
    for(i=n;i<=j;i++)
      {
          k=k+sqrt(i);
      }
      printf("%.2f",k);
}