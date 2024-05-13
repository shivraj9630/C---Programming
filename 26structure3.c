#include<stdio.h>

struct Demo
{
   int i;
   int j;
   int *ip;
   float *fp;

};
int main()
{
   struct Demo obj1;

   int No = 90;
   float f = 90.90;

   obj1.i = 11;
   obj1.j = 51;
   obj1.ip = &No;
   obj1.fp = &f;

   printf("%d\n",obj1.i);
   printf("%d\n",obj1.j);
   printf("%d\n",*(obj1.ip));
   printf("%f\n",*(obj1.fp));
   

  return 0;
}