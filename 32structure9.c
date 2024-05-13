#include<stdio.h>

struct Hello
{
   int i;
    float f;

    struct Demo
    {
      int j;
      double d;
    }dobj1, dobj2;
}hobj;
int main()
{
  hobj.i = 11;
  hobj.f = 90.9;

  hobj.dobj1.j = 21;
  hobj.dobj1.d = 20.20;
  
  hobj.dobj2.j = 51;
  hobj.dobj2.d = 30.30;
  
  return 0;
  
}