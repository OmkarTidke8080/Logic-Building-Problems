// write  a program which accept a string from user and return the difference between frequency of small characters and capital characters


#include<stdio.h>

int Difference(char *str)
{
    int iCnt = 0;
    int jCnt = 0;


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

        else if(*str >= 97 && *str <= 122)
        {
            jCnt++;
        }
        str++;
    }

    /*while(*str != '\0')
    {
        if( *str >= 97 && *str <= 122)
        {
            jCnt++;
        }
        str++;
    }*/

    return jCnt - iCnt;


}



int main()
{
    char Arr[40];
    int iRet = 0;

    printf("ENter string \n");
    scanf("%[^'\n']s",Arr);

    iRet = Difference(Arr);

    printf("%d",iRet);






    return 0;
}