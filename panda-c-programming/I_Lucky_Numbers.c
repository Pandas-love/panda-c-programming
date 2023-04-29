#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if (10<=a&&a<=99)
    {
        int value=a%10;
        a=a/10;
        int value1=a%10;
        if (value!=0&&value1!=0)
        {
            if (value%value1==0)
            {
                printf("YES");
            }
            else if(value1%value==0)
            {
                printf("YES");
            }
            else
            {
                printf("NO");
            }
        }
    } 
   return 0;
}