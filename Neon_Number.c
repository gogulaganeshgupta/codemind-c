#include<stdio.h>
int main()
{
    int n,i,r,rev=0;
    scanf("%d",&n);
    i=n*n;
    while(i!=0)
    {
        r=i%10;
        rev=rev+r;
        i=i/10;
    }
    if(rev==n)
        printf("Neon Number");
    else
        printf("Not Neon Number");
}