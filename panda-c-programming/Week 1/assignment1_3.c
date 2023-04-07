#include<stdio.h>
int main()
{
    int N=0;
    scanf("%d",&N);
    if (21<=N<=10000)
    {
        for (int i = 21; i <= N; i++)
        {
            if (i%3==0&&i%7==0)
            {
                printf("%d\n",i);
            } 
        } 
    }
    return 0;
}