#include <stdio.h>
void add(int x, int y)
{
    int sum = x + y;
    printf("%d", sum);
}
int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    if (0 <= x && x <= 100000)
    {
        if (0 <= y && y <= 100000)
        {
            add(x, y);
        }
    }
    return 0;
}