#include<stdio.h>
int main()
{
    int pocket=0;
    scanf("%d",&pocket);
    if(pocket>=10000)
    {
        printf("Gucci Bag");
        if (pocket>20000)
        {
            printf("\nGucci Belt");
        }
        
    }
    else if (pocket>=5000)
    {
        printf("Levis Bag");
    }
    else
    {
        printf("Something");
    }
    return 0;
    
}