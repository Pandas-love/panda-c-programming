#include <stdio.h>
void input(int *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &i[p]);
    }
}
void sorting(int *p, int n)
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
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    input(arr, n);
    sorting(arr, n);
    return 0;
}