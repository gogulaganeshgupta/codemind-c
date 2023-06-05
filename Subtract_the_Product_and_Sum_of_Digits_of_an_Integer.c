#include<stdio.h>
int main()
{
    int n,su=0,p=1,r;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        p=p*r;
        su=su+r;
        n=n/10;
    }
    if(su>p)
    printf("%d",su-p);
    else
    printf("%d",p-su);
    return 0;
}
    
    