#include<stdio.h>
int main()
{
    int n,r,rev=0,q;
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        r=q%10;
        rev=rev*10+r;
        q=q/10;
    }
    if(n==rev)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    
}