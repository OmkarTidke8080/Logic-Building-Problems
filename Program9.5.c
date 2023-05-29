// Accept N numbers form users and dipaly all such elements which are multiples of 11

#include<stdio.h>
#include<stdlib.h>



void Divisible(int Arr[], int iLength)
{
   
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++ )
    {
        if(Arr[iCnt] % 11 == 0 )
        {
            printf("\n%d",Arr[iCnt]);
        }
    }
    return;
}

int main()
{
    int iSize=0,iCnt=0;
    int *ptr=NULL;

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
        printf("\nEnter Element %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }
    Divisible(ptr,iSize);

    free(ptr);
    return 0;
}