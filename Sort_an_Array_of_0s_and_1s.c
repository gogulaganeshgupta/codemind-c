#include<stdio.h>
int main()
{
    int i,j,a[100],n,min;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            
            if(a[i]>a[j])
            {
                min=a[i];
                a[i]=a[j];
                a[j]=min;
            }
        }
    }
        for(i=0;i<n;i++)
        printf("%d ",a[i]);
    
}