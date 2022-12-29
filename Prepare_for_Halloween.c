#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,m,n;
        scanf("%d%d",&m,&n);
        x=m*2;
        y=n*5;
        if(x>y)
        {
            printf("Chocolate
");
        }
        else if(x==y)
        {
            printf("Either
");
        }
        else if(x<y)
        {
            printf("Candy
");
        }
    }
}