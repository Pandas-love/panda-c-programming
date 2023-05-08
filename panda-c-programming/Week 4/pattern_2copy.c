#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if (1<=n && n<=5)
    {
        int s=n-1;
        int k=1;
        for (int i = 1; i <= n; i++)
        {
            for (int i = 1; i <= s; i++)
            {
                printf(" ");
            }
            for (int i = 1; i <= k; i++)
            {
                printf("%d",i);
            }
            s--;
            k=k+2;
            printf("\n");
        }
        s=1;
        k=2*n-3;
        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j <= s; j++)
            {
                printf(" ");
            }
            for (int i = 1; i <= k; i++)
            {
                printf("%d",i);
            }
            s++;
            k=k-2;
            printf("\n");
        }
    }
    else
    {
        return 0;
    }
    return 0;   
}