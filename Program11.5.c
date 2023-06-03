// Accept N numbers from user and return product of all odd elements

#include<stdio.h>
#include<stdlib.h>


int OddProduct(int Arr[], int iLength)
{
    int i = 0;
    int iProduct = 1;


    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] % 2 != 0)
        {
            iProduct = iProduct * Arr[i];
        }
    }

    return iProduct;
}



int main()
{
    int iSize = 0;
    int iValue = 0;
    int iCnt = 0;
    int *p = NULL;
    int iRet = 0;


    printf("ENter SIze of Array : ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d element \n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt ++)
    {
        printf("ENter Element %d => ",(iCnt+1));
        scanf("%d",&p[iCnt]);
    }

   iRet = OddProduct(p,iSize);

   printf("Product of all odd elements %d: ",iRet);


   free(p);

    return 0;
}