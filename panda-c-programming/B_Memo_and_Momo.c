#include<stdio.h>
int main()
{
    long long int a=0,b=0,k=0;
    scanf("%lld%lld%lld",&a,&b,&k);
    if (1<=a&&a<=1000&&1<=b&&b<=1000&&1<=k&&k<=1000)
    {
        if (a%k==0&b%k==0)
        {
            printf("Both");
        }
        else if (a%k==0)
        {
            printf("Memo");
        }
        else if (b%k==0)
        {
            printf("Momo");
        }
        else
        {
            printf("No One");
        }
    }
    return 0;
}