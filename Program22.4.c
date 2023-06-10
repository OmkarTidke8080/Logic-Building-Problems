// Write a program which accept string from user and check whether it contains vowels in it or no

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    if( (*str == 'a') || (*str == 'A') || (*str == 'e') || (*str == 'E') || (*str == 'i') || (*str == 'I') || (*str == 'o') || (*str == 'O') || (*str == 'u') ||(*str == 'U'))                
    {
        return TRUE;
    }                     
    else
    {
        return FALSE;
    }         
}



int main()
{
    char Arr[30];
    BOOL bRet = FALSE;

    printf("ENter string");
    scanf("%[^'\n']s",Arr);  // special scanf

    bRet = ChkVowel(Arr);

    if(bRet == TRUE)
    {
        printf("COntains VOWEL");
    }
    else
    {
        printf("It does not contain vowel");
    }







    return 0;

}