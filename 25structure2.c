#include<stdio.h>

struct Demo
{
   int i;
   double d;
   int j;

};
int main()
{
    struct Demo obj1 = {11,90.90,51};

    struct Demo *ptr = &obj1;

    obj1.i = 11; // Direct member Access operator
    ptr->d = 90.90;// indirect member Access operator
    ptr->j = 51;

    printf("%d\n",obj1.i);
    printf("%f\n",obj1.d);
    printf("%d\n",ptr->j);
    printf("%f\n",ptr->d);
    printf("%d\n",ptr->i);
    
  return 0;

}