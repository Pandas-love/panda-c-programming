#include <stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    if (n >= 1)
    {
        for (int i = 1; i <= n; i++)
        {
            printf("%d ", i);
        }
    }
    else if ((n - n) == 0)
    {
        for (int i = n; i <= 1; i++)
        {
            printf("%d ", i);
        }
    }
    else
    {
        printf("0 1");
    }
    return 0;
}