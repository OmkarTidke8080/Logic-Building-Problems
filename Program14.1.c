// Accept a number from user and display below pattern 

#include<stdio.h>

void Pattern(int iNo)
{
    char ch = 'A';
    int iCnt = 0;


    if(iNo > 26)
    {
        printf("Invalid Input\n");
        return;

    }

    for(iCnt = 0; iCnt <= iNo; iCnt++)
    {
        printf("%c\t",ch);
        ch++;
    }
    printf("\n");


}



int main()
{
    int iValue = 0;

    printf("ENter Number of Elements\n");
    scanf("%d",&iValue);

    Pattern(iValue);


    return 0;
}
