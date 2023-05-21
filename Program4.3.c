// Write a program which accept two numbers and check whether numbers are equal or not

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    BOOL bRet = FALSE;

    printf("Enter Number 1 \n");
    scanf("%d",&iValue1);

    printf("ENter Number 2 \n");
    scanf("%d",&iValue2);

    bRet = ChkEqual(iValue1, iValue2);

    if(bRet == TRUE)
    {
        printf("Numbers are Equal\n");
    }
    else
    {
        printf("Number are not equal\n");
    }




    return 0;
}