#include<stdio.h>
int main()
{
    int n,r,sum=0,h=1;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        h=h*r;
        n=n/10;
    }
    if(sum==h)
    printf("Spy Number");
    else
    printf("Not Spy Number");
}