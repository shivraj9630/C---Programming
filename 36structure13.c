#include<stdio.h>

struct Demo
{
   int i;
   char ch1;
   char ch2;
   float f;
   int j;
};

struct Hello
{
  int i;
  char ch1;
  float f;
  char ch2;
  int j;

};
int main()
{
    struct Demo obj;

    printf("%d\n",sizeof(obj));

    struct Hello obj1;

    printf("%d\n",sizeof(obj1));

  return 0;
}