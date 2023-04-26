//this is the program for copying elements of two arrays
//into another array.
#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter first and second array size: ");
    scanf("%d %d",&m,&n);
    int arr1[m],arr2[n],arrnew[m+n];
    
    //inserting array elements
    printf("Enter First array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter Second array elements: ");
    for (int i = 0; i < m; i++)
    {
        scanf("%d",&arr2[i]);
    }
    
    //copying elements to new array
    for (int i = 0; i < n; i++)
    {
        arrnew[i]=arr1[i];
    }
    for (int i = 0; i < m; i++)
    {
        arrnew[n+i]=arr2[i];
    }
    
    //printinf new array
    printf("Final Array structure: ");
    for (int i = 0; i < m+n; i++)
    {
        printf("%d ",arrnew[i]);
    }
    return 0;
}