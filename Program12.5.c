// Accept n numbers from users and display summation of digits of each element

// half done


#include<stdio.h>
#include<stdlib.h>


void Summation(int Arr[], int iLength)
{
  int i = 0;
  int iNo = 0;
  int temp = 0;
  int iSum = 0;
  int iDigit = 0;

  for(i = 0; i < iLength; i++)
  {
    temp  = Arr[i];
  }
  while(temp > 0)
  {
    iDigit = temp % 10;
    iSum = iSum + iDigit;
    temp = temp / 10;
  }
  printf("\n %d Elemen Digit Sum is : %d",i+1, iSum);

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

     Summation(p,iSize);

    free(p);
    
    return 0;
}