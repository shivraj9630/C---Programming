#include<stdio.h>

struct Demo
{
  int i;
  float f;

};
int main()
{
  struct Demo Arr[4];

  Arr[0].i = 11;
  Arr[0].f = 10.10;

  Arr[1].i = 21;
  Arr[1].f = 20.20;

  Arr[2].i = 31;
  Arr[2].f = 30.30;

  Arr[3].i = 41;
  Arr[3].f = 40.40;
  
  return 0;
}