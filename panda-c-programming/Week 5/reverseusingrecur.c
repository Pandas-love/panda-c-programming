#include <stdio.h>
void input(int *p, int n, int i)
{
    if (n > 0)
    {
        printf("%d ", *(p + n));
        n--;
        input(p, n, i);
    }
}
int main()
{
    int n, i = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    input(&arr[0], n, i);
    return 0;
}