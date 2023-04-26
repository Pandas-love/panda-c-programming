#include<stdio.h>
#include<string.h>
int main()
{
    char k[1000000];
    fgets(k,1000000,stdin);
    char t[1000000];
    for (int i = 0; k[i] !='\\'; i++)
    {
        t[i]=k[i];
    }
    printf("%s",t);
    return 0;    
}