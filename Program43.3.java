// Write a java program which accept two arrays from user and copy the contents of that array into another array in reverse order and return new array

import java.util.*;

public class Program3
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
       
       int iStart = 0;
       int iEnd = Arr.length - 1;

       while(iStart < iEnd)
       {
        int temp = Arr[iStart];
        Arr[iStart] = Arr[iEnd];
        Arr[iEnd] = temp;

        iStart++;
        iEnd--;
       }
       System.out.println("Reversed elements of array 1 are : ");
        for(int i = 0; i < Arr.length; i++)
        {
           System.out.println(Arr[i]);      
        }     
        int Start = 0;
        int End = Brr.length - 1;

        while(Start < End)
        {
            int temp1 = Brr[Start];
            Brr[Start] = Brr[End];
            Brr[End] = temp1;

            Start++;
            End--;
        }
        System.out.println("Reversed elements of Array 2 are : ");
        for(int j = 0; j < Brr.length; j++)
        {
            System.out.println(Brr[j]);
        }

    }
}