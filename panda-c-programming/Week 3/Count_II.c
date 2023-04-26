#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    scanf("%s",s);
    int size=strlen(s);
    if (1<=size&&size<=1000)
    {
        int vowel=0;
        char reserve[6]={'a','e','i','o','u','\0'};
        int j=0;
        while(j<6)
        {
          for (int i = 0; i < size; i++)
        {
            if (s[i]==reserve[j])
            {
                vowel++;
            }
            else
            {
                continue;
            }
        }
        j++;  
        }
        printf("%d",vowel);
    }
    return 0;   
}