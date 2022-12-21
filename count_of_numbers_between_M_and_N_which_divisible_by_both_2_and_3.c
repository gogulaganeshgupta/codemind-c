#include<stdio.h>
int main()
{
    int n,m,c=0,i;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
     if(i%2==0&&i%3==0)
     {
        c++;
     }
    }
    printf("%d",c);
}