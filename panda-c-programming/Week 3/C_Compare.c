#include<stdio.h>
#include<string.h>
int main()
{
    char a[21];
    scanf("%s",a);
    char b[21];
    scanf("%s",b);
    for (int i = 0; ; i++)
    {
        if(a[i]>b[i])
        {
            printf("%s",b);break;
        }
        else if (a[i]<b[i])
        {
            printf("%s",a);break;
        }
        else if (a[i]=='\0'&&b[i]=='\0')
        {
            printf("%s",a);break;
        }
        else if (a[i]=='\0')
        {
            printf("%s",a);break;
        }
        else if (b[i]=='\0')
        {
            printf("%s",b);break;
        }
        else
        {
            continue;
        }    
    }
    return 0;
}