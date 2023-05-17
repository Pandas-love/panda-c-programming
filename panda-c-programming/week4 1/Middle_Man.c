#include <stdio.h>
void age(int *p, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
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
    if (n % 2 == 0)
    {
        int m = (n / 2) - 1, o = (n / 2);
        printf("%d %d", *(p + m), *(p + o));
    }
    else
    {
        int m = n / 2;
        printf("%d", *(p + m));
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    if (1 <= n && n <= 100)
    {
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            if (0 <= arr[i] && arr[i] <= 1000)
            {
                continue;
            }
            else
            {
                return 0;
            }
        }
        age(arr, n);
    }

    return 0;
}