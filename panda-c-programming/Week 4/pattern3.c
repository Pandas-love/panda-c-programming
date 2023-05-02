#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int carry = n * 2 - 1;
    int mai = carry / 2;
    int s = mai, k = mai;
    for (int i = 0; i < n; i++)
    {
        int arr[carry];
        for (int j = 0; j < carry; j++)
        {

            if (s <= j && j <= k)
            {
                arr[j] = '*';
                printf("%c", arr[j]);
            }
            else
            {
                arr[j] = ' ';
                printf("%c", arr[j]);
            }
        }
        s = s - 1;
        k = k + 1;
        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        int arr[carry];
        s = s + 1;
        k = k - 1;
        for (int j = 0; j < carry; j++)
        {

            if (s < j && j < k)
            {
                arr[j] = '*';
                printf("%c", arr[j]);
            }
            else
            {
                arr[j] = ' ';
                printf("%c", arr[j]);
            }
        }
        printf("\n");
    }
    return 0;
}