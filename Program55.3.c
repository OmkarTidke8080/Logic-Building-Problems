// write a recursive program which accept string from user and count the number of small character

#include<stdio.h>

int CountSmall(char *str)
{
   static int iCnt = 0;

    if(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCnt++;
        }
        str++;
        CountSmall(str);
    }
    else
    {
      return iCnt;
    }
}


int main()
{
    int iRet = 0;
    char Arr[50];


    printf("Enter string : ");
    scanf("%s",&Arr);

    iRet = CountSmall(Arr);

    printf("The number of small characters are : %d",iRet);
}