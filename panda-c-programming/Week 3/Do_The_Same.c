#include<stdio.h>
#include<string.h>
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    if (1<=n&&n<=100&&1<=k&&k<=100)
    {
        while (k!=0)
        {
            for (int i = 1; i <= n; i++)
            {
                printf("%d ",i);
            }
            printf("\n");
            k--;
        }
    }
    return 0;
}