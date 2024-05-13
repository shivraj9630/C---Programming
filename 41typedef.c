#include<stdio.h>

typedef const int CINT;

typedef unsigned int UINT;

int main()
{
    const int No = 11;
    CINT i = 11;

    unsigned int x = 21;
    UINT y = 21;

    printf("%d\n",i);
    printf("%d\n",y);


    return 0;
}