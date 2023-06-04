/*
// Accept a number of rows and number of columns from user and display below pattern

// Input :  iRow = 4  iCol = 5

//Output :  1  2  3  4
            5  6  7  8
            9  10  11  12 


            NOT COMPLETED
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    int iCnt = iRow;
 
 for(i = 1; i <= iRow; i++)
    {
        for(j = iRow; j <= iCol; j++)
        {
            for(iCnt = iRow; iCnt >= 1; iCnt--)
            {
            printf("%d\t",iCnt);
            }
        printf("\n");
    }
}

}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("ENter number of rows and columns : \n");
    scanf("%d",&iValue1);

    printf("ENter number of columns\n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);





    return 0;
}