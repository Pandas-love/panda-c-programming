#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (1 <= n && n <= 99)
    {
        int s = n - 1;
        int k = 1;
        for (int i = 1; i <= 2 * n / 2; i++)
        {

            for (int i = 1; i <= s; i++)
            {
                printf(" ");
            }
            for (int i = 1; i <= k; i++)
            {
                printf("*");
            }
            s--;
            k = k + 2;
            printf("\n");
        }
        s = 0;
        k = 2 * n - 1;
        for (int i = 1; i < 2 * n / 2; i++)
        {
            for (int i = 1; i <= s; i++)
            {
                printf(" ");
            }
            for (int i = 1; i <= k; i++)
            {
                printf("*");
            }
            s++;
            k = k - 2;
            printf("\n");
        }
    }
    return 0;
}