#include <stdio.h>
void rowprint(int *p, int m, int n)
{
    for (int i = m - 1; i == m - 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", *(p + i * n + j));
        }
        printf("\n");
    }
}
void columnprint(int *p, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == n - 1)
            {
                printf("%d ", *(p + i * n + j));
            }
            else
            {
                continue;
            }
        }
    }
}
int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    rowprint(&arr[0][0], m, n);
    columnprint(&arr[0][0], m, n);
    return 0;
}