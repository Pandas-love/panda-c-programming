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
    if (size1<=10&&size2<=10)
    {
      for(int i=0;i<size1;i++)
    {
        c[i]=a[i];
    }
    for(int i=0;i<size2;i++)
    {
        c[size1+i]=b[i];
    }
    int temp=0;
    temp=a[0];
    a[0]=b[0];
    b[0]=temp;
    printf("%d ",size1);
    printf("%d\n",size2);
    for(int i=0;i<size1+size2;i++)
    {
       printf("%c",c[i]); 
    }
    printf("\n%s ",a);
    printf("%s",b);  
    }
    return 0;
}