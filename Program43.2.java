// Write a java program which accept two arrays from user and return the minimum elements of each array


import java.util.*;

public class Program2
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
       
        int iMin1 = Arr[0];
        int iMin2 = Brr[0];
        for(int i = 0; i < Arr.length; i++)
        {
           if(Arr[i] < iMin1)
           {
             iMin1 = Arr[i];
           }
        }

        System.out.println("The minimum ellemnts form Array 1 is "+iMin1);

        for(int j = 0; j < Brr.length; j++)
        {
            if(Brr[j] < iMin2)
           {
             iMin2 = Arr[j];
           }
           
        }
        System.out.println("The minimum elements form Array 2 is "+iMin2);

       
    }
}