// Accept Character from user and check whether it is alpabet or not

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    if(((ch >= 'a') || (ch <= 'z')) || ((ch >= 'A') || (ch <= 'Z')) )
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
    
    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is character \n");
    }
    else
    {
        printf("It is not a character \n");
    }






    return 0;

}

