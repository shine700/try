#include<stdio.h>
int main()
{
    int x,y;
    double p=4.00,q=4.50,r=5.00,s=2.00,t=1.50;

    scanf("%d %d",&x,&y);


    if(x==1)
    {
        printf("Total: R$ %.2lf",(double)y*p);

    }
    else if(x==2)
    {
        printf("Total: R$ %.2lf",y*q);
    }
    else if(x==3)
    {
        printf("Total: R$ %.2lf",y*r);
    }
    else if(x==4)
    {
        printf("Total: R$ %.2lf",y*s);
    }
    else if(x==5)
    {
        printf("Total: R$ %.2lf",y*t);
    }

    return 0;
}
