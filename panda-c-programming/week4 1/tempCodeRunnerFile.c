#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (1 <= n && n <= 100)
    {
        int marks[n];
        int max = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &marks[i]);
            if (0 <= marks[i] && marks[i] <= 100)
            {
                continue;
            }
            else
            {
                return 0;
            }
        }
        for (int i = 0; i < 1; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (marks[i] > marks[j] || marks[i] == marks[j])
                {
                    max = marks[i];
                }
                else if (marks[i] < marks[j])
                {
                    max = marks[j];
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            int temp = max - marks[i];
            printf("%d ", temp);
        }
    }
    return 0;
}