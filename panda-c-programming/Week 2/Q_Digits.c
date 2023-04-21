#include <stdio.h>
int main()
{
    int N = 0, div = 0, divide = 0;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < N; j++)
    {
        divide = arr[j];
        do
        {
            div = divide % 10;
            divide = divide / 10;
            printf("%d ", div);
        } 
        while (divide != 0);
        printf("\n");
    }
    return 0;
}