#include <stdio.h>
int main()
{
    int n, a, item;
    scanf("%d", &n);
    int arr[n - 1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d%d", &a, &item);
    for (int k = n - 1; k >= 0; k--)
    {
        if (k == a)
        {
            arr[k] = item;
            printf("%d ", arr[k]);
        }
        else
        {
            printf("%d ", arr[k]);
        }
    }
    return 0;
}