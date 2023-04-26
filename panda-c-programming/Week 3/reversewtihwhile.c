#include<stdio.h>
int main()
{
    int n,temp=0;
    scanf("%d",&n);
    int arr[n];
    for (int k = 0; k < n; k++)
    {
        scanf("%d",&arr[k]);
    }
    int i=0,j=n-1;
    while (i<j)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    for (int m = 0; m < n; m++)
    {
        printf("%d ",arr[m]);
    }
    return 0;   
}