#include<stdio.h>

union Demo
{
    int i;
    double d;
    float f;

};
int main()
{
   union Demo obj;

   printf("%d\n",sizeof(obj));

   obj.i = 11;
   printf("%d\n",obj.i);//11

   obj.f = 90.9;
   printf("%f\n",obj.f);//90.9

   obj.d = 80.80;
   printf("%f\n",obj.d);//80.80


   return 0;

}