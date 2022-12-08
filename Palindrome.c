#include<stdio.h>
int main()
{
    int n,r,rev=0,c;
    scanf("%d",&n);
    c=n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(rev==c)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}