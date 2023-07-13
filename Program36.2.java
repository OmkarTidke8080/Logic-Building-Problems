// write a java program which accept N number from user and accept one another as NO return the index number of first Occurence of that number

import java.util.*;

public class Program2
{
    public static void main(String args[])
    {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter Size of Array : ");
      int iSize = sobj.nextInt();
      
      System.out.println("Enter NUmber to check its presence : ");
      int iNo = sobj.nextInt();

      Number nobj = new Number(iSize);

      nobj.Accept(iSize);
      nobj.FirstOcc(iSize,iNo);


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
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter the elements : ");

      for(int iCnt = 0; iCnt < Arr.length; iCnt++)
      {
         Arr[iCnt] = sobj.nextInt();
      }
   }

   public int FirstOcc(int iSize, int iNo)
   {
      for(int iCnt = 0; iCnt < Arr.length; iCnt++)
      {
        if(Arr[iCnt] == iNo)
        {
           System.out.println("Index Position of number : "+iCnt);
           break;
        }
        else
        {
            System.out.println("Element not found");
        }
      }

      return 0;
   }
}