/*
// Accept a number of rows and number of columns from user and display below pattern

// Input :  iRow = 3  iCol = 5

//Output :  A  A  A  A  A
            B  B  B  B  B
            C  C  C  C  C
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    char ch = 'A';
    int i = 0;
    int j = 0;


    for(i = 1,ch = 'A'; i <= iRow; i++,ch++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%c\t",ch);
           

        }
        printf("\n");
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