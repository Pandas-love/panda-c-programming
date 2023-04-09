#include<stdio.h>
int main()
{
  char c;
  scanf("%c",&c);
  if(48<=c&&c<=57)
  {
    printf("IS DIGIT\n");
  }
  else if (65<=c&&c<=90)
  {
    printf("ALPHA\nIS CAPITAL");
  }
  else if (97<=c&&c<=122)
  {
    printf("ALPHA\nIS SMALL");
  }
  else
  {
  }
  return 0;
}