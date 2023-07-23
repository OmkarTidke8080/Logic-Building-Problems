// Write a recursive function which displays below pattern

// Output : * * * * *

#include<stdio.h>

void DisplayR(int iNo)
{
  static int iCnt = 0;

  if(iCnt < iNo)
  {
    printf("*\t");
    iCnt++;
    DisplayR(iNo);
  }
}

int main()
{

   int iValue = 0;

   printf("Enter the number of elements : ");
   scanf("%d",&iValue);

   DisplayR(iValue);




    return 0;
}