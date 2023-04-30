#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if (0<=a&&a<=100&&0<=b&&b<=100)
    {
        if(a!=100&&b!=100)
        {
            if(a==0&&b!=0||a!=0&&b==0||a!=0&&b!=0)
            {
                int count=0;
                for (int i = 0; i < 10; i++)
                {
                        int even=0,odd=0;
                    for (int j = i; j < i+a+b; j++)
                    {
                        if (j%2==0)
                        {
                            even++;
                        }
                        else
                        {
                            odd++;
                        }
                    }
                    if (even==b&&odd==a)
                        {
                            printf("YES");
                            break;
                        }
                    else
                        {
                            count++;
                        }   
                }
                if(count==10)
                        {
                            printf("NO");
                        }
            }
            else
            {
                printf("NO");
            }
                
        }
        else
        {
            printf("NO");
        }
    }
    return 0;
}
