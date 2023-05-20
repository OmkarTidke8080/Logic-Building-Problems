// Accept Number from user and check whether it is Even or odd

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{

  if((iNo % 2) == 0)
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

   printf("Enter Number\n");
   scanf("%d",&iValue);

   bRet = ChkEven(iValue);

   if(bRet = TRUE)
   {
    printf("%d is Even Number\n",iValue);
   }
   else
   {
    ("%d is Odd NUmber\n",iValue);
   }
    return 0;
}