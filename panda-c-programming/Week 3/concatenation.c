#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];
    scanf("%s",a);
    char b[10];
    scanf("%s",b);
    char c[20];
    int size1=strlen(a);
    int size2=strlen(b);
    for(int i=0;i<size1;i++)
    {
        c[i]=a[i];
    }
    for(int i=0;i<3;i++)
    {
        c[size1+i]=b[i];
    }
    c[size1+3]='\0';//if we donot want to use loop then we have to
    //put null character by our own. thats why after a certain point
    //we manually put the null character so that string input or output stop.
    printf("%s",c);
    /*for(int i=0;i<size1+3;i++)
    {
      printf("%c",c[i]);
    }*/
    return 0;
}