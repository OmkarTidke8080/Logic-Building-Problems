/*
// Accept a number of rows and number of columns from user and display below pattern

// Input :  iRow = 4  iCol = 4

//Output :  A  B  C  D
            a  b  c  d
            A  B  C  D
            a  b  c  d
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    char ch = 'A';
    int i = 0;
    int j = 0;
    char ch1 = 'a';


    for(i = 1,ch1 = 'a'; i <= iRow; i++,ch1++)
    {
        for(j = 1,ch = 'A'; j <= iCol; j++,ch++)
        {
            if(i % 2 == 0)
            {
                printf("%c\t",ch1);
            }
            else
            {
            printf("%c\t",ch);
            }

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