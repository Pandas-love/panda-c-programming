#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    if (1<=n&&n<=1000)
    {
        int arr[n];int even=0,odd=0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&arr[i]);
            if (0<=arr[i]&&arr[i]<=1000)
            {
                if (arr[i]%2==0)
                {
                    even++;
                }
                else
                {
                    odd++;
                }
            }
            else
            {
                return 0;
            }
        }
        printf("%d %d",even,odd);
    }
    return 0;
}