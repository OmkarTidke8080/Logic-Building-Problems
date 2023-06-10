// Accept character from user and display its ASCII value in decimal, octal , hexa decimal format

#include<stdio.h>

void Display(char ch)
{
    printf("Decimal : %d  \nOctal : %o  \nHexaDecimal : %X\n",ch,ch,ch);
    

}



int main()
{
    char cValue = '\0';

    printf("Enter the character \n");
    scanf("%c",&cValue);

    Display(cValue);
  




    return 0;
}