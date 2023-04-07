#include<stdio.h>
int main()
{
    int a=0;
    scanf("%d",&a);
    if(a==0)
    {
        printf("zero");
    }
    else if (a>0)
    {
        printf("Positive");
    }
    else
    {
        printf("Negative");
    }
    return 0;
}