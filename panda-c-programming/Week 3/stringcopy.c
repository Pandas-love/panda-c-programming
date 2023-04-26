#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];
    scanf("%s",a);
    char b[50];
    scanf("%s",b);
    int size=strlen(a);
    int size1=strlen(b);
    strcpy(a,b);
    // instead of doing this we can use strcpy() function.
    // when we need to copy only 3 letter from a full sentence in that case we forcefully have to use this method.
    // for (int i = 0; i <= size1; i++) 
    // {
    //     a[i]=b[i];
    // }
    printf("%s",a);
    return 0;
}
