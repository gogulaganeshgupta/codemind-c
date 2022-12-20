#include<stdio.h>
int main()
{
    int n,i,r,rev=0,s,k,h=0;
    scanf("%d",&n);
    i=n*n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    s=rev*rev;
    while(s!=0)
    {
        k=s%10;
        h=h*10+k;
        s=s/10;
    }
    if(h==i)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}