// Accept number from user and display all such numbers which contains 3 digit in it

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
    int i = 0;
    int iNo = 0;
    int iCnt = 0;

    for(i = 0; i < iLength; i++)
    {
        iNo = Arr[i];
        while(iNo > 0)
        {
            iCnt++;
            iNo = iNo / 10;
        }
        if(iCnt != 3)
        {
            iCnt = 0;

        }
        else
        {
            printf("%d",Arr[i]);
            iCnt = 0;
        }
    }
}




int main()
{
    int iSize = 0;
    int iRet = 0;
    int iCnt = 0;
    int *p = NULL;

    printf("Enter size of Array \n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate the memory\n");
        return 0;
    }

    printf("Enter Elements %d : ",iCnt + 1);
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    Digits(p,iSize);

    free(p);
    




    return 0;
}