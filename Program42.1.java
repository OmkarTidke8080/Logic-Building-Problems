// Write a java program which accept two arrays from user and display contents of each array

import java.util.*;

public class Program1
{
    public static void main(String args[])
    {
       Scanner sobj = new Scanner(System.in);

       MyArray mobj = new MyArray();
       mobj.Accept();
       mobj.Display();

    }
    
}

class MyArray
{
   int Arr[];
   int Brr[];

   public void Accept()
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("ENter the size of Array 1 : ");
      int iSize1 = sobj.nextInt();

      System.out.println("Enter size of Array 2 : ");
      int iSize2 = sobj.nextInt();

      Arr = new int[iSize1];
      Brr = new int[iSize2];

      System.out.println("Enter the elements of array 1: ");
      for(int i = 0; i < Arr.length; i++)
      {
         Arr[i] = sobj.nextInt();
      }
      System.out.println("ENter the elements of Array  : ");

      for(int j = 0; j < Brr.length; j++)
      {
         Brr[j] = sobj.nextInt();
      }
   }

   public void Display()
   {
     for(int i = 0; i < Arr.length; i++)
     {
        System.out.println(Arr[i]);
     }
     for(int j = 0; j < Brr.length; j++)
     {
        System.out.println(Brr[j]);
     }
   }
}
