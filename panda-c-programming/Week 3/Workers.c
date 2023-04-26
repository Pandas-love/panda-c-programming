#include<stdio.h>
int main()
{
    int m1=0;
    scanf("%d",&m1);
    if (1<=m1&&m1<=100)
    {
        int m2=0;
        scanf("%d",&m2);
        if (1<=m2&&m2<=m1)
        {
            int d=0;
            scanf("%d",&d);
            if (1<=d&&d<=20)
            {
                int sum=0;
                sum=(m1*d)/m2;
                printf("%d",sum);
            }
            
        }
        
    }
    return 0;
}