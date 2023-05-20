// Write a program which accept number from user and display its multiplication of factors

#include<stdio.h>

int MultFact(int iNo)
{
    int iCnt = 0;
    int mult = 1 ;


    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
       if((iNo % iCnt)==0)
       {
         printf("%d\n",iCnt);
         mult = mult * iCnt;
       }      
    }
    return mult;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("%d",iRet);

    return 0;
}
