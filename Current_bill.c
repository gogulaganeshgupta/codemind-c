#include<stdio.h>
int main()
{
    int u,tc;
    float k;
    scanf("%d",&u);
    if(u<199)
    {
        tc=u*1.20;
        k=tc+100;
    }
    else if(u>=200&&u<400)
    {
        tc=u*1.50;
        k=100+tc;
    }
    else if(u>=400&&u<600)
    {
        tc=u*1.80;
        k=tc*15/100+tc;
    }
    else if(u>=600)
    {
        tc=u*2.00;
        k=tc*15/100+tc;
    }
    printf("%0.2f",k);
}