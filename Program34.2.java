// write a java program which accept N numbers from user and display all such elements which are dibvisible by 5


import java.util.*;


public class Program2
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of Array : ");
        int iSize = sobj.nextInt();

        ArrayDemo aobj = new ArrayDemo(iSize);

        aobj.Accept();
        aobj.Divisible();


    }
}

class ArrayDemo
{
  public int Arr[]; //  Array declaration

  public ArrayDemo(int iSize)  // COnstructor
  {
    Arr = new int[iSize]; // Array memory allocation
  }

  public void Accept()
  {
     System.out.println("Enter the elements of array : ");
     for(int iCnt = 0; iCnt < Arr.length; iCnt++)
     {
        Scanner sobj = new Scanner(System.in);
        Arr[iCnt] = sobj.nextInt();
     }
  }
   
  public void Divisible()
  {
    System.out.println("Elements divisible by 5 are: ");
    for(int iCnt = 0; iCnt < Arr.length; iCnt++)
    {
        if(Arr[iCnt] % 5 == 0)
        {
            System.out.println(Arr[iCnt]);
        }
    }
  }
}