#include <stdio.h>
void check(int *p, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (*(p + i) > *(p + j))
            {
                int temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
            else
            {
                continue;
            }
        }
    }
    printf("%d ", *(p + 0));
    printf("%d", *(p + n - 1));
}
int main()
{
    int n;
    scanf("%d", &n);
    if (1 <= n && n <= 1000)
    {
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            if (0 <= arr[i] && arr[i] <= 100000)
            {
                continue;
            }
            else
            {
                return 0;
            }
        }
        check(arr, n);
    }
    return 0;
}