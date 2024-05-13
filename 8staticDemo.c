#include<stdio.h>

void Demo()
{
  static int NO = 10;
 NO++;
 
 printf("%d\n",NO);
}
int main()
{
     Demo();
     Demo();
     Demo();

     return 0;
                      
}