#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    printf("Only input: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int count[10]={0};
    for (int i = 0; i < n; i++)
    {
        int  value=a[i];
        count[value]++;      
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d - %d",i,count[i]);
    }
        
    return 0;
}