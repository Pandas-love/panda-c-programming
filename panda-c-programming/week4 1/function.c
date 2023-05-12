// function=> return + perameter

#include <stdio.h>

int sum(int x, int y)
{
    int add = x + y;
    return add;
}
int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%d", sum(x, y));
    return 0;
}