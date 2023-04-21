#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int temp=0,index=0;
    for (int j = 0; j < 1; j++)
    {
        temp=arr[j];
        index=j+1;
        for (int k = 0; k<n-1; k++)
        {
            if (temp>arr[k])
            {
                temp=arr[k];
                index=k+1;
            }
            else
            {
                temp=temp;
            }   
        }
        printf("%d",temp);
        printf(" %d",index); 
    }
    return 0;
}