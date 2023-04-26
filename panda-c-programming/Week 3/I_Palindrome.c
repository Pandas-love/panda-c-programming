#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    char str[1000];
    scanf("%s",str);
    int size=strlen(str);
    bool count=1;
    for (int i = 0; i < size; i++)
    {
        if (str[i]!=str[size-i-1])
        {
            count=false;
            break;
        }
    }
    if (count==true)
    {
        printf("YES"); 
    }
    else
    {
        printf("NO");
    }
    return 0;
}