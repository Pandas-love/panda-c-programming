#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    if (0<n&&n<1000000)
    {
    char a[n];
    scanf("%s",a);
    int sum=0;
    for (int i = 0; i < strlen(a); i++)
    {
      if(47<a[i]&&a[i]<58)
        {
        int value=a[i];
        value=value-48;
        sum=sum+value;
        }
    }
    printf("%d",sum);
    }
    return 0; 
}