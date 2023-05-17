#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (1 <= n && n <= 99)
    {
        int k = n;
        for (int i = 1; i <= n; i++)
        {
            for (int i = 1; i <= k; i++)
            {
                printf("*");
            }
            if (k > 1)
            {
                k--;
                printf("\n");
            }
        }
    }
    return 0;
}