// Write a program which accept string fro user and accept one character check that character is present in the string

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return TRUE;
        }
        str++;
    }
    return FALSE;
}


int main()
{
    char Arr[30];
    char cValue;

    BOOL bRet = FALSE;

    printf("ENter string");
    scanf("%[^'\n']s",Arr);

    printf("Enter character to check in the string : ");
    scanf("%s",&cValue);

    bRet = ChkChar(Arr,cValue);

    if(bRet == TRUE)
    {
        printf("Character found\n");
    }
    else
    {
        printf("Character not found\n");       
    }

 
 return 0;

}
