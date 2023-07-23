// Write a recursive program which accept a sting from user and count the white spaces \

#include<stdio.h>

int WhiteSpaceR(char *str)
{
   static int iCnt = 0;
   
   if(str != '\0')
   {
     if(*str == " ")
     {
        iCnt++;
     }
     str++;
     WhiteSpaceR(str);
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

    printf("ENter STring : ");
    scanf("%s",Arr);   

    iRet = WhiteSpaceR(Arr);

    printf("The number of white spaces is : %d",iRet);



    return 0;
}