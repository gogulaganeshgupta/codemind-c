#include<stdio.h>
int main()
{
    int s,t,b,k;
    scanf("%d%d%d",&s,&t,&b);
    k=(2*s*t*b*512)/1024;
    printf("%dKB",k);
}