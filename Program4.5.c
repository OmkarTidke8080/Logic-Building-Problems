// Write a program which accept total marks obtained from user and calculate percentage
// did not work
#include<stdio.h>

float Percentage(int iTotal , int iObt)
{
    float percent = 0.0;

    percent = (float)iObt / iTotal * 100.0;

   return percent;
}

int main()
{
    int iValue1 = 0; 
    int iValue2 = 0;
    float fRet = 0.0;

    printf("Please Enter Total Number\n");
    scanf("%d",&iValue1);

    printf("Please Enter Obtained marks\n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);

    printf("Your Percantage is %d",fRet);





    return 0;
}