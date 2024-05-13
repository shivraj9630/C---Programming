#include<stdio.h>
int main()
{
  int Arr [5] ={ 10,20,30,40,50};
  
  int * p = &Arr[1];

  int *q = &Arr[3];// q is a pointer which holds Address of integer currently it holds the Add of the 3rd index on the Arr




  printf("%d\n",Arr[3]);
  printf("%d\n",sizeof(Arr));
  printf("%d\n",*p);
  printf("%d\n",Arr);
  printf("%d\n",&Arr[2]);
  printf("%d\n",&Arr[4]);
  printf("%d\n",*q);
  printf("%d\n",&p);
  printf("%d\n",&q);

  return 0;
}