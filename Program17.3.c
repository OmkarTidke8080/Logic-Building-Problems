// Accept number of rows and columns from user an ddisplay below pattern
/*
Input : iRow = 4   iCol = 5

Output :  a   b   c   d   e
          1   2   3   4   5
          a   b   c   d   e
          1   2   3   4   5
          a   b   c   d   e
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    char ch = 'a';

    int iCnt = 0;

    for(i = 1,ch = 'a'; i <= iRow; i++,ch++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i % 2 != 0)
            {
           printf("%c\t",ch);
    
        }
        else
        {
            printf("%d\t",j);
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