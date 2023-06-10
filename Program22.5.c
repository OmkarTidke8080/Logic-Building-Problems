// Accept a string from user and display ir in reverse order

#include<stdio.h>

void Reverse(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';

    start = str;
    end = str;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}


int main()
{
    char Arr[30];
    int iRet = 0;

    printf("ENter string");
    scanf("%[^'\n']s",Arr);

    Reverse(Arr);

    printf("reverse string is %s\n",Arr);

    return 0;
}