#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    scanf("%s",s);
    int size=strlen(s);
    if (1<=size&&size<=1000)
    {
        int big=0,small=0;
        for (int i = 0; i < size; i++)
        {
            if (64<s[i]&&s[i]<92)
            {
                big++;
            }
            else if (96<s[i]&&s[i]<123)
            {
                small++;
            }
            
        }
        printf("%d %d",big,small);
    }
    return 0;
}