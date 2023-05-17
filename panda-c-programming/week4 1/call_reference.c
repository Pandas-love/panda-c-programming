#include <stdio.h>
void div(int *p, int *q)
{
    *p = 2 * *p;
    *q = 2 * *q;
    int temp = *p + *q;
    printf("%d\n", temp);
}
int main()
{
    int x = 0, y = 0;
    scanf("%d%d", &x, &y);
    int sum = x + y;
    printf("%d\n", sum);
    div(&x, &y);
    printf("%d %d\n", x, y);
    return 0;
}