// Write a program which accept string from user and count the number of white spaces

#include<stdio.h>

int CountSpace(char *str)
{
    int i = 0;

    while(*str != '\0')
    {
        if(*str == 32)
        {
            i++;
        }
        str++;

    }
 return i;
}



int main()
{
    char Arr[30];


    printf("ENter string \n");
    scanf("%[^'\n']s",Arr);

    CountSpace(Arr);

    printf("Total White spaces are %d",CountSpace(Arr));
    



    return 0;

}