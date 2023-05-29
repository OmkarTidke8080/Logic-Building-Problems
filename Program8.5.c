// Write a program which accept number from user and return diffrence between summation of even digits and summation of odd digits

#include<stdio.h>

int Difference(int iNo)
{
    int iDigit = 0;
    int EvenDigit = 0;
    int OddDigit = 0;


    if(iNo < 0) // updater for negative input
    {
        iNo = -iNo;
    }
    while(iNo > 0)
    {
        iDigit = iNo % 10;  

        if(iDigit % 2 == 0)
        {
          EvenDigit = EvenDigit + iDigit;
        }

else
        {
          OddDigit = OddDigit + iDigit ;
        }
            //Diff = EvenDigit - OddDigit ;
        iNo = iNo / 10;      


    }

    return OddDigit - EvenDigit;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    iRet = Difference(iValue);

    printf("The difference between summation of odd and even numbers is %d",iRet);

    return 0;
}