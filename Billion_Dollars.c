#include<stdio.h>
int main()
{
    int x,n,a,k,c;
    scanf("%d%d%d",&n,&x,&a);
    c=x-n;
    if(c<=100)
    {
        k=c/a;
    }
    else
    {
        k=(c-100)/a;
    }
    printf("%d",k);
}