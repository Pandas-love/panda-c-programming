#include<stdio.h>
#include<string.h>
int main()
{
    char a[6];
    scanf("%s",&a);
    //how long the array is, this will decalre that
    int size_of_array=sizeof(a)/sizeof(char);
    //how long the string we input, this will declare thatD
    int size_of_string=strlen(a);
    //from count initialization to the end of for loop wrok as same as strlen
    int count=0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        count++;
    }
    printf("%d\n",size_of_array);
    printf("%d\n",size_of_string);
    printf("%d\n",count);
    return 0;
}