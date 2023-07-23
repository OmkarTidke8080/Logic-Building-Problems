// write a recursive program which accept number from user and return its product of digits

// input : 523
// output : 30



int DisplayR(int iNo)
{
   static  int iProduct = 1;
   int iDigit = 1;
   

   if(iNo != 0)
   {
     iDigit = iNo % 10;
     iProduct = iProduct * iDigit;
     iNo = iNo / 10;
     DisplayR(iNo);
   }
   else
   {
    return iProduct;
   }
    
 
}    

/*
while(iNo >= 0)
{
   iNo = iNo * iCnt;
   iCnt--;
}*/


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = DisplayR(iValue);

    printf("The Product of digits  is %d",iRet);



    return 0;
}