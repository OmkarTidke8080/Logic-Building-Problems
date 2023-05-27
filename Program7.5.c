// Write a program which accept number from user and count frequency of such a digits which are less than 6

#include<stdio.h>

int Freq6(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < 6)
        {
            iCnt ++;        
        }
        iNo = iNo / 10;

    }
    return iCnt;
}

int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter Number : \n");
  scanf("%d",&iValue);

  iRet = Freq6(iValue);

  printf("Frequency of number which are less than 6 is %d",iRet);



  return 0;
}