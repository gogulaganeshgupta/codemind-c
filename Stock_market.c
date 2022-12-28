#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int x,y;
    scanf("%d%d",&x,&y);
    if(x<y)
    {
        printf("PROFIT
");
    }
    else if(x<=y)
    {
        printf("NEUTRAL
");
    }
    else if(x>y)
    {
       printf("LOSS
");   
    }
    }
}