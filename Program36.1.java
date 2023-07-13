// Write a java program which accept N numbers from user and accept one another number as NO check whther the NO is presnt ir not

import java.util.*;
class Program1
{
   public static void main(String abc[])
   {
     Scanner sobj = new Scanner(System.in);
     
     System.out.println("Enter Size of Array : ");
     int iSize = sobj.nextInt();

     System.out.println("enter number to check its presence : ");
     int NO = sobj.nextInt();

     Number nobj = new Number(iSize);

     boolean bRet = false;

     nobj.Accept(iSize);
     nobj.Check(iSize,NO);

    
   }
}
class Number
{
   int Arr[];

   public Number(int iSize)
   {
      Arr = new int[iSize];
   }

   public void Accept(int iSize)
   {
    System.out.println("Enter the elements : ");
      Scanner sobj = new Scanner(System.in);

      for(int iCnt = 0; iCnt < Arr.length; iCnt++)
      {
        Arr[iCnt] = sobj.nextInt();

      }
   }
   
   public void Check(int iSize,int NO)
   {
      int flag = 0;
      for(int iCnt = 0; iCnt < Arr.length; iCnt++)
      {
         if(Arr[iCnt] == NO)
         {
            flag = 1;
            break;
         }
         else
         {
            flag = 0;
            
         }
      }

         if(flag == 1)
         {
            System.out.println("Number is present ");
         }
         else
         {
            System.out.println("Numbe is not present");

         }
        
   }

}