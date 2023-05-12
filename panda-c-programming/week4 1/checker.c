#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int x = 0, count = 0;
    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                printf("%d + %d = %d\n", arr[i], arr[j], x);
                count++;
            }
            else
            {
                continue;
            }
        }
    }
    printf("%d", count);
    return 0;
}