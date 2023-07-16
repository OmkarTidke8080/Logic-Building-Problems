// write a java progam which accept two arrays from user and check whethe that arrays and its elements are palindrome or not
// Write a java program which accept two arrays from user and copy the contents of that array into another array in reverse order and return new array

import java.util.*;

public class Program4
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
        System.out.println("Palindrome elements of array 1 are : ");
        for(int i = 0; i < Arr.length; i++)
        {
         int iDigit = 0;
         int iReverse = 0;
         int iTemp = Arr[i];

         while(Arr[i] != 0)
         {
            iDigit = Arr[i] % 10;
            iReverse = (iReverse * 10) + iDigit;
            Arr[i] = Arr[i] / 10;
         }
         if(iReverse == iTemp)
         {
            System.out.println(iTemp);
         }
        }

        System.out.println("Palindrome elements of Array 2 are : ");
        for(int j = 0; j < Brr.length; j++)
        {
            int Digit = 0;
            int Temp = Brr[j];
            int Reverse = 0;

            while(Brr[j] != 0)
            {
                Digit = Brr[j] % 10;
                Reverse = (Reverse * 10) + Digit;
                Brr[j] = Brr[j] / 10;
            }
            if(Reverse == Temp)
            {
                System.out.println(Temp);
            }
        }

    }
      
 }