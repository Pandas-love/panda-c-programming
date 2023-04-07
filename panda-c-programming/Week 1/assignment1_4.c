#include<stdio.h>
int main()
{
    int N=0;
    scanf("%d",&N);
    if (N>1000)
    {
        N=N-1000;
        printf("I will buy Punjabi\n");
        if (N>=500)
        {
            N=N-500;
            printf("I will buy new shoes\nAlisa will buy new shoes");
        } 
    }
    else
    {
        printf("Bad luck!");
    }
    return 0;
}