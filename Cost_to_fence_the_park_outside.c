#include<stdio.h>
int main()
{
    int l,b,w,k,n,c;
    scanf("%d%d%d%d",&l,&b,&w,&n);
    k=(l+2*w)*(b+2*w)-(l*b);
    int j;
    j=k*n;
    printf("%d",j);
}