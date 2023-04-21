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
    int search, sum = 0;
    sum = n;
    scanf("%d", &search);
    for (int j = 0; j <= n; j++)
    {
        if (search != arr[j])
        {
            sum = sum - 1;
            if (sum < 0)
            {
                printf("-1");
            }
        }
        else
        {
            printf("%d", j);
            break;
        }
    }
    return 0;
}
