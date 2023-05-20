// Write a program which accept number from user and return difference between summation of all its factors and non factors

#include<stdio.h>

int sum( int iNo)
{
    int iCnt1 = 0;
    int iCnt2 = 0;
    int sum1 = 0;
    int sum2 = 0;

    for(iCnt1 = 1; iCnt1 <= iNo; iCnt1 ++)
    {
        if((iNo % iCnt1)==0)
        {
            printf("%d\n",iCnt1);
            sum1 = sum1 + iCnt1;
        }
    }
    for(iCnt2 = 1; iCnt2 <= iNo; iCnt2++)
    {
        if((iNo % iCnt2) != 0)
        {
            printf("%d\n",iCnt2);
            sum2 = sum2 + iCnt2;
        }    

    }
    return sum1 - sum2;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number/n");
    scanf("%d",&iValue);

    iRet = sum(iValue);
    printf("%d\n",iRet);

    return 0;
}