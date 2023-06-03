// Accept N numbers from users and accept range Display all elements from that range

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[],int iLength, int iValue1, int iValue2)
{
    int i = 0;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] > iValue1  && Arr[i] < iValue2)
        {
            printf("%d\n",Arr[i]);
        }
    }
}

int main()
{
    int iSize = 0;
    int iStart = 0;
    int iEnd = 0;
    int iValue = 0;
    int *p =NULL;
    int iCnt = 0;


    printf("Enter Size of range \n");
    scanf("%d",&iSize);

    printf("ENter Starting element of the range :  ");
    scanf("%d",&iStart);

    printf("ENter ENding element of the range :  ");
    scanf("%d",&iEnd);

   p = (int *)malloc(iSize * sizeof(int));

   if(p == NULL)
   {
    printf("Unable to allocate memory\n");
    return -1;
   }

   printf("Enter %d Elements : ",iSize);

   for(iCnt = 0; iCnt < iSize; iCnt++)
   {
    printf("ENter Elements %d : ",iCnt + 1);
    scanf("%d",&p[iCnt]);
   }

   Range(p,iSize,iStart,iEnd);



    return 0;
}