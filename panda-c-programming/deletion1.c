// deletion user interface at array 1 to n
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // deletion code start from here
    int delete;
    while(n!=0)
    {
    printf("\nAt which point you want to delete element: ");
    scanf("%d", &delete);
    for (int j = delete; j < n; j++)
    {
        arr[j] = arr[j + 1];
    }
    n = n - 1;
    for (int k = 1; k <= n; k++)
    {
        printf("%d ", arr[k]);
    }
    }
    return 0;
}