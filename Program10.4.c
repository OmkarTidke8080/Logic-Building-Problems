// Accept N numbers from user and return frequency of 11 from it


#include<stdio.h>
#include<stdlib.h>

int  Frequency(int Arr[], int iLength)
{
   
    int iCnt = 0;
    int iFrequency = 0;


    for(iCnt = 0; iCnt < iLength; iCnt++ )
    {
        if(Arr[iCnt] == 11)
        {
            iFrequency++;
        }
       
    }
    return iFrequency;
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

    printf("The Frquency of number is  %d",iRet);

    free(ptr);
    return 0;
}