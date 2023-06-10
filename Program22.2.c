// write  a program which accept a string from user and count number of small characters 

#include<stdio.h>

int CountSmall(char *str)
{
    int iCnt = 0;

    if(*str == '\0')
    {
        return 0;
    }

    while(*str != '\0')
    {
        if( *str >= 97 && *str <= 122)
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

    iRet = CountSmall(Arr);

    printf("%d",iRet);






    return 0;
}