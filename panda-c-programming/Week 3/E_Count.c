#include<stdio.h>
#include<string.h>
int main()
{
    int summation[10],sum=0;
    char k[1000000];
    scanf("%s",k);
    int count=strlen(k);
    for (int i = 0;i<count; i++)
    {
        summation[i]=k[i];
        sum=sum+summation[i]-48;//here 48 is the ascii code for digits
        //ascii code - 0=48,1=49,2=50,3=51,4=52,5=53,6=54,7=55,8=56,9=57
    }
    printf("%d\n",sum);
    return 0;    
}