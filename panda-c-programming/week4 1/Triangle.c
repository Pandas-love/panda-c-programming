#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (1 <= a && a <= 100 && 1 <= b && b <= 100 && 1 <= c && c <= 100)
    {
        if (a == b && b == c)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
    }
    else
    {
        printf("No");
    }
    return 0;
}