//User interface working at array 0 to n
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int insert;
    printf("at which point you want to insert: ");
    scanf("%d", &insert);
    for (int j = n; j >= insert; j--)
    {
        arr[j + 1] = arr[j];
    }
    n = n + 1;
    for (int k = 0; k < n; k++)
    {
        printf("%d\n", arr[k]);
    }
    return 0;
}
