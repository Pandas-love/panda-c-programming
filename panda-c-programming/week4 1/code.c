#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int s = n - 1, k = 1,temp=0;
    for (int m = 1; m <= 2 * n; m++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int i = 1; i <= k; i++)
        {
            if (m<=n-1)
            {
                printf("%d", m);
            }
            else
            {
                temp=n;
                printf("%d",temp);
                
            }
        }
        if (m <= n - 1)
        {
            s--;
            k = k + 2;
            printf("\n");
        }
        else
        {
        temp--;
            s++;
            k = k - 2;
            
            printf("\n");
        }
    }
    return 0;
}