#include<stdio.h>
int main()
{
    int n,temp=0;
    scanf("%d",&n);
    int arr[n];
    for (int j = 0; j < n; j++)
    {
        scanf("%d",&arr[j]);
    }
    int m=1;
    for (int i = 0; i < n/2; i++)
    {
        
        temp=arr[i];
        arr[i]=arr[n-m];
        arr[n-m]=temp;
        m++;
    }
    for (int k = 0; k < n; k++)
    {
        printf("%d ",arr[k]);
    }
    return 0;
}