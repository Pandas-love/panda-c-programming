#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    int value=a;
    if (value==122)
    {
        value=value-25;
        printf("%c",value);
    }
    else
    {
        value=value+1;
        printf("%c",value);
    }
    return 0;
}