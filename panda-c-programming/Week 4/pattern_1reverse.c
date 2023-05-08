#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s=0;
    int k=n;
    for (int i = 1; i <= n; i++)
    {
        for (int i = 1; i <= s; i++)
        {
            printf(" ");
        }
        for (int i = 1; i <= k; i++)
        {
            //printf("*");
            printf("%d",i);
        }
        s++;
        k--;
        printf("\n");
    }
    return 0;
}