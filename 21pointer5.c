#include<stdio.h>
int main()
{
  char c = 'A';
  int i = 11;
  float f = 3.14;
  double d = 80.80;

  char *cp = &c;
  int *ip = &i;
  float *fp = &f;
  double *dp = &d;

  void *vp = NULL;

  vp = &c;
  printf("%c\n",*(char *)vp);

  vp = &i;
  printf("%d\n",*(int *)vp);

  vp = &f;
  printf("%f\n",*(float *)vp);

  vp = &d;
  printf("%f\n",*(double *)vp);

    
  return 0;
}