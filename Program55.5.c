// Write a recursive program which accept a number from user and return its reverse number

#include<stdio.h>

int ReverseR(int iNo)
{
    int iDigit = 0;
    static int iReverse = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iReverse = (iReverse * 10) + iDigit;
        iNo = iNo / 10;

        ReverseR(iNo);
    }
    else
    {
        return iReverse;
    }


   
    /*
     while(iNo != 0)
     {
        iDigit = iNo % 10;
        iReverse = (iReverse * 10) + iDigit;
        iNo = iNo / 10;
     }
    }*/
}



int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("ENter number : ");
    scanf("%d",&iValue);

    iRet = ReverseR(iValue);

    printf("The Reverse number is : %d",iRet);

    return 0;
}