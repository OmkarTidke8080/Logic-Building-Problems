// write  a program which accept a string from user and count number of capital characters 

#include<stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0;

    if(*str == '\0')
    {
        return 0;
    }

    while(*str != '\0')
    {
        if( *str >= 65 && *str <= 90)
        {
            iCnt++;
        }
        str++;
    }

    return iCnt;


}



int main()
{
    char Arr[40];
    int iRet = 0;

    printf("ENter string \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountCapital(Arr);

    printf("%d",iRet);






    return 0;
}