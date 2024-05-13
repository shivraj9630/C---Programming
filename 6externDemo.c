#include<stdio.h>
int A = 10;

extern int B;
extern int C;

int main()
{
  printf("value of A is %d \n",A);

  printf("value of B is %d \n",B);

  printf("value of C is %d \n",C);

  return 0;
}