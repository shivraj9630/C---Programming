#include<stdio.h>

int Addition(int No1, int No2)// 100 function name is internally cosider as a base address
{
   int Ans = 0;
   Ans = No1 + No2;
   return Ans;
}
int main()
{
    int Value1 = 10;
    int Value2 = 20;
    int iRet = 0;

    int (*ptr)  (int , int);

    ptr = Addition;

    //iRet = Addition(Value1,Value2);

    iRet = ptr(Value1,Value2);

    printf("%d\n",iRet);
    
    return 0;

}