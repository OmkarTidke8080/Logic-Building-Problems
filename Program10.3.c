// Accept N numbers from user and check whether that number contains 11 or not


#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL  Presence(int Arr[], int iLength)
{
   
    int iCnt = 0;



    for(iCnt = 0; iCnt < iLength; iCnt++ )
    {
        if(Arr[iCnt] == 11)
        {
            return 1;
        }
       
    }
    return 0;
}

int main()
{
    int iSize = 0, iCnt=0;
    int *ptr=NULL;
    BOOL bRet = FALSE;

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
      bRet = Presence(ptr,iSize);

      if(bRet = TRUE)
      { 
        printf("11 is present\n");
      }
      else
      {
        printf("11 is absent\n");
      }
    free(ptr);
    return 0;
}