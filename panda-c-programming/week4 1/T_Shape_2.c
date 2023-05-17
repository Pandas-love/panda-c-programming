#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (1 <= n && n <= 99)
    {
        int s = n - 1;
        int k = 1;
        for (int i = 1; i <= n; i++)
        {
            for (int i = 1; i <= s; i++)
            {
                printf(" ");
            }
            for (int i = 1; i <= k; i++)
            {
                printf("*");
            }
            if (s > 0)
            {
                s--;
                k = k + 2;
                printf("\n");
            }
        }
    }
    return 0;
}