#include<stdio.h>

#pragma pack(1)
struct Demo
{
   int i;
   char ch;
   float f;
   int j;
};
int main()
{
    struct Demo obj;

    printf("%d\n",sizeof(obj));

    return 0;
}