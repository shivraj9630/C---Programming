#include<stdio.h>
int main()
{
  int No = 0;

  printf("Enter Number:\n");
  scanf("%d",&No);

  if ((No % 2)==0)
  {
    printf("It is Even Number...\n");
  }                   
  else
  {
    printf("It is Odd Number...\n");
  }

  return 0;
}