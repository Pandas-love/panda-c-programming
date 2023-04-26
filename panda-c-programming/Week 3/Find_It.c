#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if (1<=n&&n<=100)
    {
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&arr[i]);
            if (0<=arr[i]&&arr[i]<=1000)
            {
                continue;
            }
            else
            {
                return 0;
            }
        }
        int x;
        scanf("%d",&x);
        if (0<=x&&x<=1000)
        {
            int value=0;
            for (int i = 0; i < n; i++)
            {
                if (arr[i]==x)
                {
                    value++;
                }
                else
                {
                    continue;
                }
            }
            printf("%d",value);
        }
    }
    return 0;
}