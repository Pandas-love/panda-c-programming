#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d",&arr[i]);
  }
  for (int j = 0; j < n; j++)
  {
    continue;
    if (arr[j]<=10)
    {
        printf("A[%d] = %d\n",j,arr[j]);
    }
    else
    {
        continue;
    }
  }  
  return 0;
}