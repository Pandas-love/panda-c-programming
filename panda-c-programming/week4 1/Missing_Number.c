#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int result[n];
    if (0 < n && n <= 100)
    {
        int i = 1;
        while (i <= n)
        {
            int arr[4];
            int temp = 0;

            for (int i = 0; i < 4; i++)
            {
                scanf("%d", &arr[i]);
                if (0 <= arr[i] && arr[i] <= pow(2, 32))
                {
                    continue;
                }
                else
                {
                    return 0;
                }
            }
            for (int i = 0; i < 4; i++)
            {
                temp = temp - arr[i];
                temp = abs(temp);
            }
            for (int j = i - 1; j < i; j++)
            {
                result[j] = temp;
            }
            i++;
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d\n", result[i]);
        }
    }
    return 0;
}