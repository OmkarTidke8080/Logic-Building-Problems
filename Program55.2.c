// Write a recursive program which accept a number from user and return the largest digit 

#include<stdio.h>

int LargestR(int iNo)
{
   static int ilarge = 0;
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit > ilarge)
        {
            ilarge = iDigit;
        }
        if(ilarge == 9)
        {
            return ilarge;
        }
        iNo = iNo / 10;
        
        LargestR(iNo);
    }
    else
    {
        return ilarge;
    }
    /*
    int large = 0;
    int iDigit = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit > large)
        {
            large = idigit;
        }
        if(large == 9)
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

    iRet = LargestR(iValue);

    printf("The Largest Digit is : %d",iRet);

    return 0;
}