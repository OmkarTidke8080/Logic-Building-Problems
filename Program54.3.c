// Write a recursive program which accept a string from user and count the number of characters

// Input : HELLO
// output : 5

#include<stdio.h>

int Strlen(char *str)
{
    int iCnt = 0;
     
     if(*str == '\0')
     {
       return 0;
     }
     else
     {
        return 1 + Strlen(str+1);
     }
}

/*
while(char *str != '\0)
{
    iCnt++;
    str++;
}
 
*/

int main()
{
  int iRet = 0;
  char Arr[20];

  printf("Enter String : ");
  scanf("%s",Arr);

  iRet = Strlen(Arr);

  printf(" The Number of character is : %d",iRet);

    return 0;
}