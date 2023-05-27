// Write a program which accept number from user and display its digits in reverse

#include<stdio.h>

    void ReverseDigit(int iNo)
    {
        int iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            printf("%d\n",iDigit);
            iNo = iNo / 10;
        }
    }

    int main()
    {
        int iValue = 0;

        printf("Enter number : \n");
        scanf("%d",&iValue);

        ReverseDigit(iValue);

        return 0;
    }