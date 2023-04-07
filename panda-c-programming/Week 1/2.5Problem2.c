#include<stdio.h>
int main()
{
    int a;
    float b;
    scanf("%d %f",&a,&b);
    printf("%d + %0.0f = %0.0f\n",a,b,a+b);
    printf("%d - %0.0f = %0.0f\n",a,b,a-b);
    printf("%d * %0.0f = %0.0f\n",a,b,a*b);
    printf("%d / %0.0f = %0.2f\n",a,b,a/b);
    return 0;
}