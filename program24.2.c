// Write  a program which accept string from user and accept character from user retur the frequency of that character

#include<stdio.h>

void CountChar(char *str, char ch)
{
    int i = 0;

    while( *str != '\0')
    {
        if( *str = ch)
        {
            i++;
        }
        str++;
    }
       printf("Frequency of charcater is %d",i);

}


int main()
{
    char Arr[30];
    char cValue = '\0';

    printf("Enter string \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character to check\n");
    scanf("%c",&cValue);

    CountChar(Arr,cValue);





    return 0;

}