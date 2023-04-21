#include<stdio.h>
int main()
{
  int n=0;int temp=0;
  scanf("%d",&n);
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d",&arr[i]);
  }
  for (int j = n-1; j>=0; j--)
  {
    if (arr[j]>temp||arr[j]==temp)
    {
        temp=arr[j];
    }
    else
    {
        continue;
    }
    
  }
  printf("%d",temp);
  
  return 0;
}