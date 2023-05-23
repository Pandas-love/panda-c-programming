#include <stdio.h>
void input(int *p, int n, int i)
{
    if (n > 0)
    {
        scanf("%d", (p + i));
        n--;
        i++;
        input(p, n, i);
    }
}
void output(int *q, int n, int i)
{
    if (n > 0)
    {
        printf("%d ", *(q + n));
        n--;
        i++;
        output(q, n, i);
    }
}
int main()
{
    int n, i = 1;
    scanf("%d", &n);
    int arr[n];
    input(&arr[0], n, i);
    output(&arr[0], n, i);
    return 0;
}