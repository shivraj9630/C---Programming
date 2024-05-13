#include<stdio.h>
int main()
{
   int No = 0;

   printf("Enter Your Standerd...\n");
   scanf("%d",&No);
   

   switch(No)
   {
    case 1:
    printf("Your exam is at 1pm\n");
    break;

    case 2:
    printf("Your exam is at 2pm\n");
    break;

    case 3:
    printf("Your Exam is at 3pm\n");
    break;

    case 4:
    printf("Your Exam is at 4pm\n");
    break;

    default :
    printf("Invalid Statement...\n");
   }

   return 0;
}