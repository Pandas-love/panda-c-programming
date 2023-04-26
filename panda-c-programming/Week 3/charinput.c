#include<stdio.h>
#include<string.h>
int main()
{
    char kiptuu[15]={'i','l','o','v','e','y','o','u','m','a','i','s','h','a'};
    for (int i = 0; i < 14; i++)
    {
        printf("%c ",kiptuu[i]);
    }
    printf("\n");
    char arr[17];
    for (int i = 0; i <17; i++)
    {
        scanf("%c",&arr[i]);
    }
    for (int i = 0; i < 17; i++)
    {
        printf("%c",arr[i]);
    }
    return 0;
}