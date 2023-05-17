#include <stdio.h>
#include <string.h>
void tom(char *p)
{
    int len = strlen(p);
    len = len * 2;
    printf("%d", len);
}
int main()
{
    char arr[10];
    scanf("%s", &arr);
    tom(arr);
    return 0;
}