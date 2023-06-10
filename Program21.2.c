// Accept a character from user. if character is small display its corresponding capital character and if it is small the display its corresponding capital charater 

#include<stdio.h>

void Display(char ch)
{
    if(ch > 97 )
    {
        ch = ch - 32;
        printf("%c",ch);
    }
    else if(ch < 97)
    {
        ch = ch + 32;
        printf("%c",ch);
    }

}


int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c",&cValue);

    Display(cValue);




    return 0;
}