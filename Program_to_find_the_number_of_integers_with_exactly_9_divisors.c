#include<stdio.h>
int main()
{
    int n,i,j,c=0,k=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
            
        }
        if(c==9)
        {
            printf("%d ",i);
            k++;
        }
        c=0;
    }
    printf("
Total=%d ",k++);
}