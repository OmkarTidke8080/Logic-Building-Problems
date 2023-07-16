// Write a java program which accept array from user and reverse each number of that array

import java.util.*;

 class program1
{
    public static void main(String args[])
    {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter the size of array : ");
      int iSize = sobj.nextInt();

      
      MyArray mobj = new MyArray(iSize);
      mobj.Accept();
      mobj.ReverseArray();

    }
}
class MyArray
{
    int Arr[];
    public MyArray(int iSize)
    {
      Arr = new int[iSize];
    }
    public void Accept()
    {
       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter the elements : ");
       for(int i = 0; i < Arr.length; i++)
       {
         Arr[i] = sobj.nextInt();
       }
    }
    public void ReverseArray()
    {
        
        int iDigit = 0;
        int Reverse  = 1;

        

       System.out.println("The reverse elemengs are : ");
       for(int i = 1; i < Arr.length; i++)
       {
          while(Arr[i] != 0)
          {
            iDigit = Arr[i] % 10;
            Reverse = (Reverse * 10) + iDigit;
            Arr[i] = Arr[i] / 10;

          }
           
           System.out.println(Arr[i]);
       }
    }
}