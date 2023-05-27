// Write a program to find factorial of given number

#include<stdio.h>

int Fact(iNo)
{
    int iCnt = 0;
    int Fact = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        Fact = Fact * iCnt;
    }
    return Fact;
}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = Fact(iValue);

    printf("Factorial of number is %d",iRet);



    return 0;
}