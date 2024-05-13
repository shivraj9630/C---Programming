#include<stdio.h>

struct Demo
{
    int i;
    float f;

};

struct Hello
{
   int j;
   double d;
  
   struct Demo dobj;
   
};

int main()
{
   struct Hello hobj;

   hobj.dobj.i = 51;
   hobj.dobj.f = 80.8;

   hobj.j = 11;
   hobj.d = 90.90;

   printf("%d\n",hobj.j);
   printf("%f\n",hobj.d);
   printf("%f\n",hobj.dobj.f);
   printf("%d\n",hobj.dobj.i);
   
   return 0;

}