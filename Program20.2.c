// Accept Character from user and check whether it is capital or not

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
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

    printf("ENter the chaacter");
    scanf("%c",&cValue);
    
    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is capital \n");
    }
    else
    {
        printf("It is not a capital letter \n");
    }






    return 0;

}

