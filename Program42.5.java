// Accept 2 arrays from user and display the summation of each array

import java.util.*;

public class Program5
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
       
       System.out.println("Enter the size of Array 1 : ");
       int iSize1 = sobj.nextInt();

       System.out.println("Enter the size of Array 2 : ");
       int iSize2 = sobj.nextInt();

       Arr = new int[iSize1];
       Brr = new int[iSize2];

       System.out.println("Enter Elements of array1 : ");
       for(int i = 0; i < Arr.length; i++)
       {
          Arr[i] = sobj.nextInt();
       }

       System.out.println("ENter elements of Array 2 :");
       for(int j = 0; j < Brr.length; j++)
       {
         Brr[j] = sobj.nextInt();
       }
    }

    public void Display()
    {
        int iSum1 = 0;
        int iSum2 = 0;
        System.out.println("summation of elements of array 1 are :");
        for(int i = 0; i < Arr.length; i++)
        {
             iSum1 =  iSum1 + Arr[i];
        }
        System.out.println(iSum1);

        System.out.println("summation elements of array 2 are :");
        for(int j = 0; j < Brr.length; j++)
        {
            iSum2 = iSum2 + Brr[j];
        }
         System.out.println(iSum2);

        
    }
}