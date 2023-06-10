/*
Accept character from user. if it is capital then display all the
character from th input characters till Z. if the input character os small
then print all the character in reverse order till a. in other case return
directly
*/

#include<stdio.h>

void Display(char ch)
{
   
    if(ch >= 65)
    {
        for( char  ich = ch; ich <= 'Z'; ich++)
        {
            printf("%c",ich);
        }
    }
    else if( ch >= 97 && ch < 122)
    {
        for( char ich = ch; ich >= 'a'; ich--)
        {
            printf("%c",ich);
        }
    }
    

}



int main()
{
    char cValue = '\0';

    printf("Enter the character");
    scanf("%c",cValue);

    Display(cValue);




    return 0;

}