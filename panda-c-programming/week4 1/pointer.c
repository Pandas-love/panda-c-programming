#include <stdio.h>
int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    int *p = &m;
    int *q = &n;
    *p = 500;
    *q = 100;
    printf("%d %d\n", m, n);
    return 0;
}