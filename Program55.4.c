// Write a recursive program which accept number from user and return the smallest digit

#include<stdio.h>

int SmallestR(int iNo)
{
   static int iSmall = 0;
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < iSmall)
        {
            iSmall = iDigit;
        }
        if(iSmall == 0)
        {
            return iSmall;
        }
        iNo = iNo / 10;
        
        SmallestR(iNo);
    }
    else
    {
        return iSmall;
    }
    /*
    int iSmall = 0;
    int iDigit = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit > large)
        {
            iSmall = idigit;
        }
        if(iSmall == 0)
        {
            break;
        }
        iNo = iNo / 10;
    }*/
}



int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("ENter number : ");
    scanf("%d",&iValue);

    iRet = SmallestR(iValue);

    printf("The Smallest Digit is : %d",iRet);

    return 0;
}