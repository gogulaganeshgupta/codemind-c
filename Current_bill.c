#include<stdio.h>
int main()
{
    int u,sr,tc;
    float k;
    scanf("%d",&u);
    if(u<=199)
    {
        tc=u*1.20;
        k=tc+100;
    }
    else if(u>=200&&u<400)
    {
        tc=u*1.50;
        k=tc+100;
    }
    else if(u>=400&&u<600)
    {
        tc=u*1.80;
        k=tc+(tc*15)/100;
    }
    else if(u>=600)
    {
        tc=u*2.00;
        k=tc+(tc*15)/100;
    }
    printf("%0.2f",k);
}