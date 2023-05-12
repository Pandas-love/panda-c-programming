// functions => return + No parameter

#include <stdio.h>

int sum(void)
{
    int x, y;
    scanf("%d%d", &x, &y);
    int add = x + y;
    return add;
}
int main()
{
    printf("%d", sum());
    return 0;
}