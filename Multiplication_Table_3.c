#include<stdio.h>
int main()
{
    int n,m,k,i;
    scanf("%d%d%d",&n,&m,&k);
    for(i=m;i<=k;i++)
    {
        printf("%d x %d = %d
",n,i,n*i);
    }
}