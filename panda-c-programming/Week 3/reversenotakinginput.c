#include<stdio.h>
int main()
{
    int temp=0;
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    int i=0,j=9;
    while(i<j)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}