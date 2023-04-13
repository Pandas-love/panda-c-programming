#include<stdio.h>
int main()
{
  int n=0,even_sum=0,odd_sum=0;
  scanf("%d",&n);
  int arr[n];
  for ( int i = 0; i < n; i++)
  {
    scanf("%d",&arr[i]);    
  }
  for (int j = 0; j < n; j++)
  {
    if (arr[j]%2==0)
    {
        even_sum=even_sum+arr[j];
    }
    else
    {
        odd_sum=odd_sum+arr[j];
    }
  }
  printf("%d %d",even_sum,odd_sum);
  return 0;
}