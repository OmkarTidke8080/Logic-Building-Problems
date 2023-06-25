// Write a program which accept string from user and reverse that string

#include<stdio.h>

void strcpyrevX(char *src, char *dest)
{
    int iLength =0;

    while(*src != '\0')
    {
        src++;
        iLength++;
    }
    src--;

    while(iLength != 0)
    {
        *dest = *src;
        src--;
        dest++;
        iLength--;
    }
    *dest = '\0';
}



int main()
{
    char Arr[30];
    char Brr[30];

    
    printf("Enter string : ");
    scanf("%[^'\n']s",Arr);

    strcpyrevX(Arr,Brr);

    printf("String after reversing is %s ",Brr);



    return 0;

}