#include <stdio.h>

int main()
{
    char a[1000];
    fgets(a, 1000, stdin);
    // another way of taking string as input
    // char a[20];scanf("%s",a); this will take input upto space but not going to take spaces.
    int small = 0, cap = 0, space = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == 32)
        {
            space++;
        }
        else if (65 <= a[i] && a[i] <= 90)
        {
            cap++;
        }
        else if (97 <= a[i] && a[i] <= 122)
        {
            small++;
        }
        else
        {
            continue;
        }
    }
    printf("Capital - %d\n", cap);
    printf("Small - %d\n", small);
    printf("Spaces - %d\n", space);
    return 0;
}