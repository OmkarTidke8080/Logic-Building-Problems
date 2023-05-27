// Write a program which accept number from user and check whether it contains 0 int itor not

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckZero(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            break;
        }
        iDigit = iNo / 10;
    }
    if(iDigit == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}



int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number\n");
    scanf("%d",&iValue);

   bRet =  CheckZero(iValue);

   if(bRet == TRUE)
   {
    printf("It contains Zero\n");
   }
   else
   {
    printf("It does not contain zero\n");
   }




    return 0;

}