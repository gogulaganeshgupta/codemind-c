#include<stdio.h>
int main()
{
    int n,i,j,k,r=0,p=0,m;
    scanf("%d",&n);
    i=n*n;
    while(n!=0)
    {
        m=n%10;
        r=r*10+m;
        n=n/10;
    }
    k=r*r;
    while(k!=0)
    {
        m=k%10;
        p=p*10+m;
        k=k/10;
    }
    if(i==p)
    printf("True");
    else
    printf("False");
}