// Write a program which accept number from user and display its multiplication of factors

#include<stdio.h>
#include<math.h>

int MultFact(int iNo)
{
    int iCnt = 0;
    int mult = 1 ;
    int product = 1;

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
       if((iNo % iCnt)==0)
       {
         printf("%d\n",iCnt);
         mult = mult * iCnt;
       }     
    }
        for(int i = 1; i <= sqrt(iNo); i+1)
        {
        if(iNo % iCnt == 0)
    {
        product = product * i;
        int temp = iNo/i;
        product = product * temp;

    }
    }  
   
    return product;

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
