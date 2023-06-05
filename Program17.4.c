// Accept number of rows and columns from user an ddisplay below pattern
/*
Input : iRow = 5   iCol = 5

Output :  1   2   3   4   5   
         -1  -2  -3  -4  -5
         1   2   3   4    5 
         -1  -2  -3  -4  -5
         1   2   3   4   5 
         -1  -2  -3  -4  -5

*/

// Accept number of rows and columns from user an ddisplay below pattern
/*
Input : iRow = 4   iCol = 4

Output :  2   4   6   8   10
          1   3   5   7   9
          2   4   6   8   10
          1   3   5   7   9
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    int iCnt = 0;
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1,iCnt = 1; j <= iCol; j++)
        {
            if( i % 2 != 0)
            {
                printf("%d\t",j);
            }
            else
            {
                printf("%d\t",-j);
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