#include <stdio.h>
void sorting(int *p, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (*(p + i) > *(p + j))
            {
                int temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", *(p + i));
    }
}
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (-1000000 <= a && a <= 1000000)
    {
        if (-1000000 <= b && b <= 1000000 && -1000000 <= c && c <= 1000000)
        {
            int arr[3] = {a, b, c};
            sorting(arr, 3);
            printf("\n");
            printf("%d\n%d\n%d\n", a, b, c);
        }
    }
    return 0;
}