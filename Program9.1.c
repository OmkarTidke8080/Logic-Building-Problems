// Accept N numbers from user and return the differnece betwen summation of even elements and summation of odd elements

#include<stdio.h>
#include<stdlib.h>


int Difference(int Arr[], int iLength)
{
    int EvenSum = 0;
    int OddSum  = 0;
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++ )
    {
        if(Arr[iCnt] % 2 == 0)
        {
            EvenSum = EvenSum + Arr[iCnt];
        }
        else
        {
            OddSum = OddSum + Arr[iCnt];
        }
    }
    return EvenSum - OddSum;
}



int main()
{
    int iSize = 0;
    int iRet = 0;
    int iLength = 0;
    int *p = NULL;
    int iCnt = 0;

    printf("Enter hoe many numbers yoy want to store \n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    printf("Enter numbers\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p , iSize);

    printf("Result is %d \n",iRet);



  return 0;

}