// Write a java program which accept N numbers from user and display all such elements which are even and divisible by 5

import java.util.*;

public class Program3
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array : ");
        int iSize = sobj.nextInt();

        ArrayDemo dobj = new ArrayDemo(iSize);
        dobj.Accept();
        dobj.Divisible();
    }
}

class ArrayDemo
{
   int Arr[];  // Array declaration

   public  ArrayDemo(int iSize)
   {
      Arr = new int[iSize];
   }

   void Accept()
   {
    Scanner sobj = new Scanner(System.in);

    for(int iCnt = 0; iCnt < Arr.length; iCnt++)
    {
       Arr[iCnt] = sobj.nextInt();
    }
   }

   public void Divisible()
   {
      System.out.println("Even alemnts nd divisible by 5 are : ");

      for(int iCnt = 0; iCnt < Arr.length; iCnt++)
      {
        if((Arr[iCnt] % 2 == 0)  && (Arr[iCnt] % 5 == 0))
        {
          System.out.println(Arr[iCnt]);
        }
      }
   }
}