#include<stdio.h>
float con(int in)
{
    float cm;
    cm=2.54*in;
    return cm;
}
int main()
{
    int in;
    scanf("%d",&in);
    float f=con(in);
    printf("%0.2f",f);
}