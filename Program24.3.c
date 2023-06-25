// Write a program which accept string from user and accept one character. return index of first occurence of that character

#include<stdio.h>

int FirstOccur(char *str, char ch)
{
    int iCnt = 1;

    while((*str != '\0') && (*str != ch))
    {
        str++;
        iCnt++;

    }
    if(*str == '\0')
    {
        return -1;
    }
    else
    {
        return iCnt;

    }

}

int  main()
{
    char Arr[30];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter String :  ");
    scanf("%[^'\n']s",Arr);

    printf("ENter character :  ");
    scanf("%s",&cValue);

    iRet = FirstOccur(Arr,cValue);

    printf("Character location is %d \n",iRet);







    return 0;

}