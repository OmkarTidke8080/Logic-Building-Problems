//Write a program which accepts number from user an ddisplay the summation of all its non factors

#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int sum = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt ++)
    {
        if((iNo % iCnt) != 0)
        {
            sum = sum + iCnt;
        }
    }
    return sum;



}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter NUmber\n");
    scanf("%d\n",&iValue);

    iRet =  SumNonFact(iValue);
    printf("%d\n",iRet);





    return 0;

}