// Write a recursive function which accept number from user and return the summation of digits

// input : 879
// output : 24

int DisplayR(int iNo)
{
    int iDigit = 0;
   static  int iSum = 0;
    
  if(iNo != 0)
  {
     iDigit = iNo % 10;
     iSum = iSum + iDigit;
     iNo = iNo / 10;
     DisplayR(iNo);
  }
  else
  {
    return iSum;
  }
}    

/*
while(iNo != 0)
{
    iDigit = iNo % 10;
    iSum = iSum + iDigit;
    iNo = iNo / 10;
}*/


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = DisplayR(iValue);

    printf("The Sum is %d",iRet);



    return 0;
}