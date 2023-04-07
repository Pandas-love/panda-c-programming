#include<stdio.h>
int main()
{
    long long int A=0,B=0,mul=0;
    scanf("%lld%lld",&A,&B);
    if (-10^9<=A && B<=10^9)
    {
        mul=A*B;
        printf("%lld",mul);
    }
    else
    {
        printf("Choose number between -10^9<=A && B<=10^9");
    }
    return 0;
}