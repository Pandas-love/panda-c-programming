#include<stdio.h>
int main()
{
  int n;
  int arr[n];
  scanf("%d",&n);
  for (int i = 0; i <n; i++)
  {
    scanf("%d",&arr[i]);
  }
  for (int j = n; j>0; j--)
  {
    printf("%d",arr[j]);
  }

  return 0;
}