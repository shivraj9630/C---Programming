#include<stdio.h>

#define PI 3.14
int main()
{
    float Ans = 0.0f;
    float Rad = 2.0f;

    Ans = PI * Rad * Rad;
    
    printf("Area of Circle %f\n", Ans);
    return 0;
}