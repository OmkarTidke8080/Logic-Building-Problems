// Write a recursive function which displays below pattern

// Output :  a  b  c  d  e  f

#include<stdio.h>

void DisplayR(int iNo)
{
   static char ch = 'a';

    if(ch == 'f')
    {
        return;
    }
    printf("%c\t",ch);
    ch++;
    DisplayR(iNo);
    
/*
    if(iNo == 0)
    {
        return;
    }
  printf("%d\t",iNo);
  
  DisplayR(iNo - 1);
*/
    

 

}
int main()
{
   int iValue = 0;
  
   printf("Enter the number of elements : ");
   scanf("%d",&iValue);

   DisplayR(iValue);




    return 0;
}