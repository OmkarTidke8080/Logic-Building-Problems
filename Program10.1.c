// Accept N numbers and return frequency og even numbers#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>



int  Frequency(int Arr[], int iLength)
{
   
    int iCnt = 0;
    int EvenCount = 0;


    for(iCnt = 0; iCnt < iLength; iCnt++ )
    {
        if(Arr[iCnt] % 2 == 0)
        {
            EvenCount++;
        }
    }
    return EvenCount;
}



int main()
{
    int iSize=0,iCnt=0;
    int *ptr=NULL;
    int iRet = 0;

    printf("Enter Number Of Elements => ");
    scanf("%d",&iSize);

    ptr=(int *)malloc(iSize * sizeof(int));

    if(ptr==NULL)
    {
        printf("Failed To Allocate Memory !");
        return -1;
    }
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("\nEnter Element %d :",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }
    iRet =  Frequency(ptr,iSize);

    printf("The number of even element is %d",iRet);

    free(ptr);
    return 0;
}