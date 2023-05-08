#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if (1<=n&&n<=9)
    {
        int s = n - 1;
        int k = 1;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= s; j++)
            {
                printf(" ");
            }
            for (int l = 1; l <= k; l++)
            {
                printf("%d", i);
            }
            s--;
            k++;
            printf("\n");
        }
    }
    else
    {
        return 0;
    }
    return 0;
}