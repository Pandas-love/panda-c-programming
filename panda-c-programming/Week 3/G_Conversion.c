#include<stdio.h>
#include<string.h>
int main()
{
    char str[100000];
    scanf("%s",str);
    int size=strlen(str);
    for (int i = 0;i<size; i++)
    {
        if (str[i]<123&&str[i]>96)
        {
            str[i]=str[i]-32;
        }
        else if(str[i]>64&&str[i]<91)
        {
            str[i]=str[i]+32;
        }
        else if (str[i]==44)
        {
            str[i]=str[i]-12;
        }
        else
        {
            continue;
        }
    }
    printf("%s",str);
    return 0;
}