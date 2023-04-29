#include<stdio.h>
int main()
{
    float x=0,p=0;
    scanf("%f%f",&x,&p);
    if (1<=x&&x<=99&&1<=p&&p<=40000)
    {
        float price=0;
        price=p/(1-(x/100));
        printf("%.2f",price);
    }
    return 0;
}