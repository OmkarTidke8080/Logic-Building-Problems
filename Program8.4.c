// Write a program which accept number from user and return multiplication of all digits

#include<stdio.h>

int DigitMultiply(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;
    int mult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        mult = mult * iDigit;
        iNo = iNo / 10;
    }

    return mult;
}



int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = DigitMultiply(iValue);

    printf("Multiolication of digits in number is %d",iRet);



    return 0;
}