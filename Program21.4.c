// Accept character from user and check whethrr it is a special symbol or not

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
    if((ch >= 21) && (ch <= 47))
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

    printf("Enter the character \n");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It is a special character\n");
    }
    else
    {
        printf("It is a not a special character\n");
    }







    return 0;

}