#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if (1 <= a && a <= 21 && a % 2 != 0)
    {
        int mid = (a + 1) / 2;
        for (int i = 1; i <= a; i++)
        {
            for (int j = 1; j <= a; j++)
            {
                if (mid == j)
                {
                    printf("#");
                }
                else if (i == mid)
                {
                    printf("#");
                }
                else
                {
                    printf("*");
                }
            }
            printf("\n");
        }
    }
    return 0;
}