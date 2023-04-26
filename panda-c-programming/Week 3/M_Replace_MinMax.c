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
  int temp=a[0],temp1=a[0];
  for (int i = 1; i < n; i++)
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
  for (int i = 1; i < n; i++)
  {
    if (temp1>a[i])
    {
        temp1=temp1;
    }
    else
    {
        temp1=a[i];
    }
  }
  for(int i=0;i<n;i++)
  {
      if(temp==a[i])
      {
          a[i]=temp1;
      }
      else if(temp1==a[i])
      {
          a[i]=temp;
      }
      else
      {
          continue;
      }
  }
  for(int i=0;i<n;i++)
  {
      printf("%d ",a[i]);
  }
    return 0;
  }