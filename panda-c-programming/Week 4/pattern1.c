#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int k=n-1;
    //printf("\n");
    for (int i = 0; i < n; i++)
    {
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            if (k<=j)
            {
              arr[j]='*';
              printf("%c",arr[j]);
            }
            else
            {
                arr[j]=' ';
                printf("%c",arr[j]);
            }
        }
       k--;
       printf("\n");
    }
    return 0;
}