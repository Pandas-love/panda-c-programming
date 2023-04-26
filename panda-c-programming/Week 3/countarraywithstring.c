
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%s",a);
    int size=strlen(a);
    if(1<=size&&size<=10000000)
    {
    char c[27]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','\0'};
    for (int i = 0;c[i]!='\0'; i++)
    {
        int count=0;
        for (int j = 0; a[j]!='\0'; j++)
        {
            if (c[i]==a[j])
            {
                count++;
            }
            else
            {
                continue;
            }
        }
        if(count>0)
        {
         printf("%c : %d\n",c[i],count);
        }
    }
    }
    return 0;
}