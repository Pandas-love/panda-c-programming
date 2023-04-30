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
                int count=0;int p=1;
                for (int i = 1; i <= 100; i=i+(a+b))
                {
                        int even=0,odd=0;
                        int limit=(a+b)*p;
                    for (int j = i; j <= limit; j++)
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
                        p++;
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
                if(count==100/(a+b))
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