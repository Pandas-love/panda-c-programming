#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    if (1 <= n && n <= 100000)
    {
        int arr[n];int count[m];
        if (1 <= m && m <= 100000)
        {
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &arr[i]);
            if (1 <= arr[i] && arr[i] <= m)
            {
                continue;
            }
            else
            {
                return 0;
            }
        }
            for (int i = 1; i <= m; i++)
            {
                count[i]=0;
            }
            for (int i = 1; i <= n; i++)
            {
                int value = arr[i];
                count[value]++;
            }
            for (int i = 1; i <= m; i++)
            {
                printf("%d\n", count[i]);
            }
        }
    }
    return 0;
}
