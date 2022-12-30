#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int r,n,rev=0;
        scanf("%d",&n);
        int q=n;
        while(q!=0)
        {
            r=q%10;
            rev=rev*10+r;
            q=q/10;
        }
    
      if(n==rev)
    {
        printf("True
");
    }
    else
    {
        printf("False
");
    }
    }
}