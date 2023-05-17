#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (1 <= n && n <= 20)
    {
        int arr[n];
        int s = n - 1, k = 1;
        for (int i = 1; i <= n; i++)
        {
            for (int i = 1; i <= s; i++)
            {
                printf(" ");
            }
            if (i % 2 == 0)
            {
                for (int i = 1; i <= k; i++)
                {
                    printf("*");
                }
            }
            else
            {
                for (int i = 1; i <= k; i++)
                {
                    printf("^");
                }
            }
            s--;
            k = k + 2;
            printf("\n");
        }
    }
    return 0;
}