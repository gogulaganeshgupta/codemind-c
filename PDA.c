#include<stdio.h>
int main()
{
    int n,i,sum=0,m;
    
    scanf("%d",&n);
    m=n;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==m)
    printf("PERFECT");
    else
    if(sum>m)
    printf("ABUNDANT");
    else
    if(sum<m)
    printf("DEFICIENT");
}