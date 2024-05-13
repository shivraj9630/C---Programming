#include<stdio.h>

struct Demo
{
   int i;
   float f;

   struct Hello
   {
     int j;
     double d;
   }hobj;

}dobj1,dobj2;

int main()
{
   dobj1.i = 11;
   dobj2.f = 80.8;
   dobj1.hobj.j = 51;
   dobj2.hobj.d = 90.90;

   printf("%d\n",dobj1.i);
   printf("%f\n",dobj2.f);
   printf("%d\n",dobj1.hobj.j);
   printf("%f\n",dobj2.hobj.d);
   printf("%d\n",sizeof(dobj2));
   printf("%d\n",sizeof(dobj1));

   return 0;
}