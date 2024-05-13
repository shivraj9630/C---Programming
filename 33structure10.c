#include<stdio.h>

struct Demo
{
   int No;
   
   struct Demo *ptr;
};
int main()
{
   struct Demo obj;
   obj.No = 11;
   obj.ptr = NULL;
   
   printf("%d\n",obj.ptr);
   printf("%d\n",obj.No);

  return 0;
}