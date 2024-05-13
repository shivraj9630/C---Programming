#include<stdio.h>

int main()
{
    int No = 11;
    int * iptr = & No;

    char ch = 'A';
    char * cptr = &ch;

    double d = 80.80;
    double *dptr = &d;

    float f = 3.3;
    float * fptr = &f;

    printf("%d\n",No);
    printf("%c\n",ch);
    printf("%f\n",d);
    printf("%f\n",f);

    printf("%d\n",&No);
    printf("%d\n",&ch);
    printf("%d\n",&d);
    printf("%d\n",&f);

    printf("%d\n",&iptr);
    printf("%d\n",&cptr);
    printf("%d\n",&dptr);
    printf("%d\n",&fptr);

    printf("%d\n",*iptr);
    printf("%c\n",*cptr);
    printf("%f\n",*dptr);
    printf("%f\n",*fptr);

    printf("%d\n",iptr);
    printf("%d\n",cptr);
    printf("%d\n",dptr);
    printf("%d\n",fptr);

    printf("%d\n", sizeof(iptr));
    printf("%d\n", sizeof(cptr));
    printf("%d\n", sizeof(dptr));
    printf("%d\n", sizeof(fptr));

    printf("%d\n", sizeof(*iptr));
    printf("%d\n", sizeof(*cptr));
    printf("%d\n", sizeof(*dptr));
    printf("%d\n", sizeof(*fptr));

      return 0;
}