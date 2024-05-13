#include<stdio.h>

struct Demo
{
    int i;
    char ch;
    float f;
    double d;
   
};

int main()
{
   struct Demo obj1;
   struct Demo obj2;

   obj1.d = 80.80;
   obj1.i = 11;
   obj1.ch = 'A';
   obj1.f = 3.14;
   

   obj2.i = 21;
   obj2.ch = 'B';
   obj2.f = 11.1;
   obj2.d = 90.90;
   

   printf("%c\n",obj1.ch);
   printf("%c\n",obj2.ch);
   printf("%d\n",obj1.i);
   printf("%d\n",obj2.i);
   printf("%f\n",obj1.d);
   printf("%f\n",obj2.d);
  
   
   return 0;
}