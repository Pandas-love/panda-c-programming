#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int count[26]={0};
    int size=strlen(s);
    if (1<=size&&size<=10000000)
    {
        for (int i = 0; i < size; i++)
    {
        int value=s[i];
        value=value-97;
        count[value]++;
    }
    for (int i = 0; i < 26; i++)
    {
        int value=i+97;
        if(count[i]!=0)
        {
        printf("%c : %d\n",value,count[i]);
        }
    }
    }
    return 0;
}
