// Accept number from user and return the differnece between largest and smallest number

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int i = 0;
    int iMax = Arr[0];
    int iMin = Arr[0];

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] > iMax)
        {
            iMax = Arr[i];
        }
        return iMax;
    }

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] < iMin)
        {
            iMin = Arr[i];
        }
        return iMin;
    }


    return iMax - iMin;
}
int main()
{
    int iSize = 0;
    int iCnt = 0;
    int iRet = 0;
    int *p = NULL;
    
    printf("Enter the size of array : \n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("ENter %d elements : ",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter Element %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p,iSize);

    printf("Difference between Largest and smallest number  is : %d",iRet);


    return 0;
}