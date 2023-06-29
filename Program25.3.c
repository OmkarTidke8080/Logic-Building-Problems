// Accept a number of rows and columns from user and display below pattern

/*
 out put : *  *  *  *  *  *
           *            * *
           *          *   *
           *        *     *
           *     *        *
           *  *           *
           *  *  *  *  *  *
          
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i;
    int j;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if( (i == 1) || (i == iRow) || (j == 1) || (j == iCol))
            {
                printf("*\t");    
            }
            if(j > i)
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

    printf("Enter Number of rows : ");
    scanf("%d",&iValue1);

    printf("ENter number of columns : ");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);



     





    return 0;
}