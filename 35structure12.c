#include<stdio.h>

struct Demo
{
   int i;
   char ch;
   double d;
   float f;

};
int main()
{ 
    struct Demo obj;

    printf("%d\n",sizeof(obj));
    
   return 0;
}