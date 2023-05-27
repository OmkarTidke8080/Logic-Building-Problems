// Write a program which accept number form user and if number is less then 50 then print small if it is larger than 50 and
// less than 100 then print medium if it is gretae rthen 100 then print large

#include<stdio.h>

void Number(int iNo)
{
    if(iNo <= 50)
    {
        printf("It is Small Number\n");
    }
    else if(iNo > 50 && iNo < 100)
    {
        printf("It is medium number\n");
    }
    else if(iNo > 100)
    {
        printf("It is Large Number\n");
    }
}



int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;




    return 0;
}