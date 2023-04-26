#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];char b[1000];
    scanf("%s",a);
    scanf("%s",b);
    int s=strlen(a);
    int t=strlen(b);
    printf("%d ",s);
    printf("%d\n",t);
    printf("%s %s",a,b);
    return 0;
}