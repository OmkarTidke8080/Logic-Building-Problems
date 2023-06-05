// Accept number of rows and columns from user an ddisplay below pattern
/*
Input : iRow = 5   iCol = 5

Output :  *   *   *   *
          *   *   *
          *   *
          * 

*/



#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    int iCnt = 0;
    for(i = 1; i <= iRow; i++)
    {
        for(j = iCol; j >= 1; j--)
        {
            if(j >= i)
            {
                printf(" *\t");
            }
            else
            {
                printf(" \t");
            }
            
           
        }
        printf("\n");
            }   
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of rows\n");
    scanf("%d",&iValue1);

    printf("ENter number of columns\n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);



    return 0;
}