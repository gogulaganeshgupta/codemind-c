#include<stdio.h>
int main()
{
    int x,y,c,d;
    scanf("%d%d",&x,&y);
    float a,b,m,n;
    scanf("%f%f",&a,&b);
    c=x+y;
    d=x-y;
    m=a+b;
    n=a-b;
    printf("%d %d
",c,d);
    printf("%0.1f %0.1f",m,n);
}