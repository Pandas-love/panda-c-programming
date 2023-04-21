#include<stdio.h>
int main()
{
  int n;long long int sum=0;
  scanf("%d",&n);
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d",&arr[i]);
  }
  for (int j = 0; j < n; j++)
  {
    sum=sum+arr[j];
  }
  if (sum<0)
  {
    sum=-sum;
    printf("%ld",sum);
  }
  else
  {
    printf("%ld",sum);
  }  
  return 0;
}