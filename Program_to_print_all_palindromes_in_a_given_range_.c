#include<stdio.h>
int main()
{
    int n,t,rev=0,i,m,j;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        j=i;
        rev=0;
        while(j!=0)
        {
            t=j%10;
            rev=rev*10+t;
            j=j/10;
        }
        if(rev==i)
            printf("%d ",i);
    }
}