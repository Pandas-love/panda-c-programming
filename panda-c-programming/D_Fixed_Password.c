#include<stdio.h>
int main ()
{
    int n=1;
    int a;
    while(n!=0)
    {
        scanf("%d",&a);
        if(a==1999)
        {
            printf("Correct");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }
    return 0;
}