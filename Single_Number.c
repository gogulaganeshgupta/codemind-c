#include<stdio.h>
int main()
{
    int a[1000],n,i,j,c;
    scanf("%d
",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(a[i]==a[j])
                {
                    c++;
                }
            }
        }
        if(c==0)
        {
            printf("%d",a[i]);
        }
    }
}