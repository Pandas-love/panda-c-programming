#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int a[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d",&a[i]);
  }
  int temp,temp1;
  for (int i = 0,temp=a[0]; i < n; i++)
  {
    if (temp<a[i])
    {
        temp=temp;
    }
    else
    {
        temp=a[i];
    }
    }
  for (int i = 0,temp1=a[0]; i < n; i++)
  {
    if (temp1>a[0])
    {
        temp1=temp1;
    }
    else
    {
        temp1=a[i];
    }
  }
  printf("%d%d",temp,temp1);
    return 0;
  }