// Write a program which accept three numbers from user and print its multiplication

#include<stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int Ans = 0;

    if(iNo < 0)    // using updater
           {
            iNo = -iNo;
           }
    if((iNo1 || iNo2 || iNo3) <= 0)
    {
      
    } 

    Ans = iNo1 * iNo2 * iNo3;

    return Ans;
}


int main()
{
  int iValue1 = 0;
  int iValue2 = 0;
  int  iValue3 = 0;
  int iRet = 0;

  printf("Please enter three Numbers\n");
  scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

  iRet = Multiply(iValue1,iValue2,iValue3);

  printf("Multipliaction is %d",iRet);



    return 0;

}