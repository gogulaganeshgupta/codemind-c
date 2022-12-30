#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int d,l,r;
        scanf("%d%d%d",&d,&l,&r);
        if(d>=l && d<=r)
        {
         printf("Take second dose now
");   
        }
        else if(d<l)
        {
            printf("Too Early
");
        }
        else if(d>r)
        {
            printf("Too Late
");
        }
    }
}