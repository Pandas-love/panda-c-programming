#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char str[100];
    int size=0,len=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%s",str);
        size=strlen(str);
        if(size<=10)
        {
            printf("%s\n",str);
        }
        else
        {
            len=size-2;
            printf("%c%d%c\n",str[0],len,str[size-1]);//here we print character
            //from the string we gave input but in case of scanf we can not
            //we index as the program automatically takes input of first character
            //if we command to take character as an input
        }
    }
    return 0;
}