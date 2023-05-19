#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (3 <= n && n <= 49 && n % 2 != 0)
    {
        int s = 1, k = n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (s == j)
                {
                    if (j == n / 2 + 1 && s == n / 2 + 1)
                    {
                        printf("X");
                    }
                    else
                    {
                        printf("\\");
                    }
                }
                else if (k == j)
                {
                    printf("/");
                }
                else
                {
                    printf("*");
                }
            }
            s++;
            k--;
            printf("\n");
        }
    }
    return 0;
}