#include<stdio.h>
int main()
{
  int a,rem=0;
  scanf("%d",&a);
  while (a>0)
  {
    rem=a%10;
    a/=10;
  }
  if (rem%2==0)
  {
    printf("EVEN");
  }
  else
  {
    printf("ODD");
  }
  return 0;
}