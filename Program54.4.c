// Write a recursive program which accept number from user and return its factorial

// input : 5
// output : 120



int DisplayR(int iNo)
{
   static  int iFact = 1;
   

   if(iNo != 0)
   {
     iFact = iFact * iNo;
     iNo--;
     DisplayR(iNo);
   }
   else
   {
    return iFact;
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

    printf("The factorial  is %d",iRet);



    return 0;
}