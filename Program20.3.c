// Accept Character from user and check whether it is Digit or not

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
    if((ch >= '0') && (ch <= '9'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("ENter the character : \n");
    scanf("%c",&cValue);
    
    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("It is Digit \n");
    }
    else
    {
        printf("It is not a Digit \n");
    }






    return 0;

}

