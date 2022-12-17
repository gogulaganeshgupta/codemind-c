#include<stdio.h>
int main()
{
    int n,i,j,k,l,sum=0;
    scanf("%d%d%d%d",&n,&j,&k,&l);
    for(i=n;i<=j;i++)
    {
        if(i%k==0)
        {
            if(i%l==0)
            {
            continue;
        }
        sum=sum+i;
        }
        
    }
    printf("%d",sum);
}