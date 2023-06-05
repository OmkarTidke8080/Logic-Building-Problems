// Accept number of rows and columns from user an ddisplay below pattern
/*
Input : iRow = 5   iCol = 5

Output :  1   2   3   4
          2   3   4   5
          3   4   5   6
          4   5   6   7

*/
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    int iCnt = 0;
    for(i = 0; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t",i+j); 
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