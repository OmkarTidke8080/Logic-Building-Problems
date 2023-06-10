// Write a table to display ASCII table. table that contains symbol, decimal, hexa decimal and octal representation of every member from 0 to 255

#include<stdio.h>

void DisplayTable(int iNo)
{
    for(;iNo <= 255; iNo++)
    {
        printf(" %3d %9x %8o %6c \n",iNo,iNo,iNo,iNo);

    }
}

int main()
{
    int i = 0;

    printf("Symbol Decimal Hexa Decimal Octal");

    DisplayTable(i);





    return 0;
}