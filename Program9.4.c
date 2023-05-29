// Accept n numbers from users and display all such elements whic are divisibe by 3 and 5

#include<stdio.h>
#include<stdlib.h>



void Divisible(int Arr[], int iLength)
{
   
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++ )
    {
        if(Arr[iCnt] % 5 == 0 && Arr[iCnt] % 3 == 0)
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