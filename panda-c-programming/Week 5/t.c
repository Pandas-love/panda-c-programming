#include <stdio.h>
void length(char *len, int i)
{
    if (*(len + i) != '\0')
    {
        i++;
        length(len, i);
    }
    else
    {
        printf("%d", i);
        return;
    }
}
int main()
{
    char text[100];
    int i = 0;
    fgets(text, 100, stdin);
    length(&text[0], i);
    return 0;
}