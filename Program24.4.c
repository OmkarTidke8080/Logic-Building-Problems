// write a program which accept string from user and accept one character. return the last occurence of tha character

#include<stdio.h>

int LastOccurence(char *str,char ch)
{
    int iCnt = 0;
    int iPos =  0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iPos = iCnt;

        }
        str++;
        iCnt++;
    }

    return iPos;


}

int main()
{
    char Arr[30];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter string : ");
    scanf("%s",Arr);

    printf("Enter character : \n");
    scanf("%s",&cValue);

    iRet = LastOccurence(Arr,cValue);

    printf("Character location is %d",iRet);


    
    
    
}