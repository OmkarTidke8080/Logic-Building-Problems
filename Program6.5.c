// Writa a program which accept number from user and display its table in reverse order

#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;
    int table = 0;
    

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        table = iNo * iCnt;

        printf("\n%d * %d = %d",iNo,iCnt,table);
    }
}






int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    Table(iValue);





    return 0;
}