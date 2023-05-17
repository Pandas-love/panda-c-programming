// 1 <= N <= 1000
// -10^9 <= X1, X2 <= 10^9
#include <stdio.h>
int gauri, ash, equal;
void result()
{
    if (gauri < ash)
    {
        printf("Tiger");
    }
    else if (ash < gauri)
    {
        printf("Pathan");
    }
    else
    {
        printf("Draw");
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    if (1 <= n && n <= 1000)
    {
        int m = 2 * n;
        int arr[m];
        for (int i = 0; i < m; i++)
        {
            scanf("%d", &arr[i]);
            if (-1000000000 <= arr[i] && arr[i] <= 1000000000)
            {
                continue;
            }
            else
            {
                return 0;
            }
        }
        for (int i = 0; i < m; i += 2)
        {
            if (arr[i] > arr[i + 1])
            {
                ash++;
            }
            if (arr[i] < arr[i + 1])
            {
                gauri++;
            }
            else
            {
                equal++;
            }
        }
        result();
    }
    return 0;
}