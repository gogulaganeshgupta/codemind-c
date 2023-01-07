#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d%d%d",&i,&j,&n);
    if(i>50&&j>60&&n>100)
    {
        printf("%d",10);
    }
    else if(i>50&&j>60)
    {
        printf("%d",9);
    }
    else if(j>60&&n>100)
    {
        printf("%d",8);
    }
    else if(i>50&&n>100)
    {
        printf("%d",7);
    }
    else if(i>50||j>60||n>100)
    {
        printf("%d",6);
    }
    else 
    {
        printf("%d",5);
    }
}