/* 
Accept NUmber of rows and number of columns from user and display below pattern

Input : iRow = 4   iCol = 3

out put :  1  2  3
           1  2  3
           1  2  3
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
   int i = 0;
   int j = 0;

   int iCnt = 0;

   for(i = 1; i <= iRow;  i++)
   {
    for(j = 1,iCnt = 1; j <= iCol;  j++,iCnt++)
    {
        printf("%d\t",iCnt);
    }

    printf("\n");
   }

}




int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("ENter number of rows : \n");
    scanf("%d",&iValue1);

    printf("Enter Number of Columns : \n");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);




    return 0;
}