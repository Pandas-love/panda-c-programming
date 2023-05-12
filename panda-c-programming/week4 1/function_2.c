// functions => No return + No Parameter

#include <stdio.h>

void sum(void)
{
    int x, y;
    scanf("%d%d", &x, &y);
    int add = x + y;
    printf("%d", add);
}
int main()
{
    sum();
    return 0;
}