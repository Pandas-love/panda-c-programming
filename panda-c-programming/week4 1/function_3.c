// functions => No return + parameter

#include <stdio.h>

void sum(int x, int y)
{
    int add = x + y;
    printf("%d", add);
}
int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    sum(x, y);
    return 0;
}