#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (1 <= n && n <= 100)
    {
        int arr[n][n];
        int count = 0;
        int temp = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%d", &arr[i][j]);
                if (0 <= arr[i][j] && arr[i][j] <= 100)
                {
                    temp = temp + arr[i][j];
                    if (arr[i][j] == 1)
                    {
                        if (i == j)
                        {
                            count++;
                        }
                        else
                        {
                            printf("NO");
                            return 0;
                        }
                    }
                }
                else
                {
                    return 0;
                }
            }
        }
        if (temp == n && count == n)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
        return 0;
    }
}