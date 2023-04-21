#include<stdio.h>
int main()
{
  int n=0;int mul=0;
  scanf("%d",&n);
  for (int i = 1; i <13; i++)
  {
    mul=n*i;
    printf("%d * %d = %d\n",n,i,mul);
  }
  return 0;
}