#include <stdio.h>
void mini(long long int *q, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (*(q + i) > *(q + j))
            {
                int temp = *(q + i);
                *(q + i) = *(q + j);
                *(q + j) = temp;
            }
            else
            {
                continue;
            }
        }
    }
    printf("%lld ", *q);
}
int main()
{
    int m, n, p = 0;
    scanf("%d%d", &m, &n);
    if (1 <= n && n <= 100000 && 1 <= m && m <= 100000)
    {

        long long int arr[m], sort[n];
        for (int i = 0; i < m; i++)
        {
            scanf("%lld", &arr[i]);
            if (-1000000000 <= arr[i] && arr[i] <= 1000000000)
            {
                continue;
            }
            else
            {
                return 0;
            }
        }
        for (int i = 0; i < m; i = i + n)
        {
            int s = 0;
            p = n + i;
            for (int j = i + 0; j < p; j++)
            {
                sort[s] = arr[j];
                s++;
            }
            mini(&sort[0], n);
        }
    }
    return 0;
}