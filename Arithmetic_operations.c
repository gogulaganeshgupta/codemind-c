#include<stdio.h>
int main()
{
    int a,b,c,d,e,x,y;
    scanf("%d%d",&a,&b);
    c=a+b;
    d=a-b;
    e=a*b;
    x=a/b;
    y=a%b;
    printf("Sum:%d
",c);
    printf("Difference:%d
",d);
    printf("Product:%d
",e);
    printf("Quotient:%d
",x);
    printf("Remainder:%d",y);
}