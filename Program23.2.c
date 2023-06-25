// write a program to accept a string from user and convert it into uppper case

#include<stdio.h>

void strupper(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        str++; 
    }
}




int main()
{
    char Arr[30];

     printf("Enter string");
    scanf("%[^'\n']s",Arr);


    strupper(Arr);

    printf("Modified string is %s",Arr);






    return 0;

}