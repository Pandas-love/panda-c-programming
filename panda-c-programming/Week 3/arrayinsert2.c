//user interface working at array 1 to n
#include<stdio.h>
int main()
{
    int n,j;
    int insert,item;
    scanf("%d",&n);
    int arr[n];
    for (int i=1; i<=n; i++) //taking input in array
    {
        scanf("%d",&arr[i]);
    }
    //inserting code start from here
    while(n<10)
    {
        printf("\nat which point you want to insert: ");
        scanf("%d",&insert);
        printf("Enter the item: ");
        scanf("%d",&item);
        n++;
        for (j = n-1; j >= insert; j--)
        {
            arr[j+1]=arr[j];
        }
        arr[insert]=item;

        for (int k = 1; k <=n; k++)
        {
            printf("%d ",arr[k]);
        }
    }

    return 0;
}
