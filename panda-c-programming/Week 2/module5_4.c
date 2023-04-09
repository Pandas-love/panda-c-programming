#include<stdio.h>
int main()
{
  char f; int rem;
  scanf("%c",&f);
  if (f<=90)
  {
    rem=f+32;
    printf("%c",rem);
  }
  else
  {
    rem=f-32;
    printf("%c",rem);
  }
  return 0;
}