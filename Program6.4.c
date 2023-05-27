// Write a program which accept number form user and display its table

#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;
    int table = 0;
    

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        table = iNo * iCnt;

        printf("\n%d * %d = %d",iNo,iCnt,table);
    }
}




int main()
{
    int iValue = 0;


    printf("ENter Number\n");
    scanf("%d",&iValue);

   Table(iValue);



    return 0;
}