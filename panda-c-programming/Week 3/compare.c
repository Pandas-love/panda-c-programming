// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char a[50];
//     scanf("%s",a);
//     char b[50];
//     scanf("%s",b);
//     for (int i = 0; ; i++)
//     {
//         if (a[i]>b[i])
//         {
//             printf("The bigger word is: %s",a);break;
//         }
//         else if (a[i]<b[i])
//         {
//             printf("The bigger word is: %s",b);break;
//         }
//         else if (a[i]=='\0'&& b[i]=='\0')
//         {
//             printf("Both are equal");break;
//         }
//         else if (a=='\0')
//         {
//             printf("The bigger word is: %s",b);break;
//         }
//         else if (b=='\0')
//         {
//             printf("The bigger word is: %s",a);break;
//         }
//         else
//         {
//             continue;
//         }
//     }
    
//     return 0;
// }

#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];
    scanf("%s",a);
    char b[50];
    scanf("%s",b);
    int compare=strcmp(a,b);
    //here actullay strcmp() function do plus and minus like at a[i]='c'=99(ascii value) and
    //at b[i]='a'=97 then it do compare=a[i]-b[i]=2 so compare>0 as b is bigger. if compare==0 then
    //both are equal.
    if (compare<0)
    {
        printf("The bigger word is: %s",b);
    }
    else if (compare>0)
    {
        printf("The bigger word is: %s",a);
    }
    else
    {
        printf("Both word are equal.");
    }
    return 0;
}