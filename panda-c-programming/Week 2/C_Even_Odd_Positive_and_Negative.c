#include <stdio.h>
int main()
{
    int n = 0, pos = 0, neg = 0, odd = 0, even = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int j = n - 1; j >= 0; j--)
    {
        if (arr[j] % 2 == 0)
        {
            even = even + 1;
            if (arr[j] < 0)
            {
                neg = neg + 1;
            }
            else
            {
                if (arr[j] == 0)
                {
                    pos = pos + 0;
                }
                else
                {
                    pos = pos + 1;
                }
            }
        }
        else
        {
            odd = odd + 1;
            if (arr[j] < 0)
            {
                neg = neg + 1;
            }
            else
            {
                pos = pos + 1;
            }
        }
    }
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);
    return 0;
}