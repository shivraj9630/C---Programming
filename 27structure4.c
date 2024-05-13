#include<stdio.h>

struct Demo
{
   int i;
   float f;
   int  Arr[4];

};
int main()
{
   struct Demo obj;

   obj.i = 11;
   obj.f =  90.9;

   obj.Arr[0] = 10;
   obj.Arr[1] = 20;
   obj.Arr[2] = 30;
   obj.Arr[3] = 40;
   
   return 0;
}