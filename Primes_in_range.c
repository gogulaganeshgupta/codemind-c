#include<stdio.h>
#include<math.h>

int prime(int n)
{
    int i,c=0;

    for(i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
          c++;  
        }
    }
    if(c==1)
    return 1;
    else
    return 0;

}

int main()
{
    int a,b,k=0;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        if(prime(i)&&i!=1)
        {
            k++;
        }
    }
    printf("%d",k);
}