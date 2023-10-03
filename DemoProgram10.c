#include<stdio.h>


int CalculateCube(int iValue)
{
  int iAns = 1;

    iAns= iValue*iValue*iValue;

    return iAns;

}

int main()
{
    int iNo = 0;
    int iAns =1;

    printf("Enter num ..\n");
    scanf("%d",&iNo);

    iAns = CalculateCube(iNo);

    printf("Cube is : %d \n",iAns);

    return 0 ; 
}