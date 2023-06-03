// Accept N numbers from user and accept anothe number as NO , return index of last occurence of that no

#include<stdio.h>
#include<stdlib.h>

int LastOccurence(int Arr[],int iLength, int iNo)
{
    int i = 0;
    int iPos = 0;
    
    for(i = 0; i < iLength; i++)
    {
        iPos = i;
        
    }
    return iPos;


}

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0,iValue = 0;
    int *p = NULL;

    printf("\n Enter number of elements : ");
    scanf("%d",&iSize);

    printf("\n Enter the number : ");
    scanf("%d",&iValue);

    p = (int*)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("\n Unable to allocate memory ...");
        return -1;
    }

    printf("\n Enter %d elements ",iSize);

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        printf("\n Enter elements %d : ",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    iRet = LastOccurence(p,iSize,iValue);
    
    if(iRet == -1)
    {
        printf("There is no such number\n");
    }
    else
    {
        printf("Last Occurence of number is %d",iRet);
    }
  
    

    free(p);

    return 0;
}