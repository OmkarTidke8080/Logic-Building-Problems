// write a java program which accept N numbers from user and display all such eleemnst which are multiples of 11


import java.util.*;

import javax.xml.transform.Source;

public class Program5
{
    public static void main(String args[])
    {
       Scanner sobj = new Scanner(System.in);
       
       System.out.println("Enter the size of array : ");
       int iSize = sobj.nextInt();

       ArrayDemo dobj = new ArrayDemo(iSize);
       dobj.Accept();
       dobj.divisible();


    }
}

class ArrayDemo
{
  int Arr[];

  public ArrayDemo(int iSize)
  {
    Arr = new int[iSize];
  }

  public void Accept()
  {
    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter the elements of array : ");
    for(int iCnt = 0; iCnt < Arr.length; iCnt++)
    {
       Arr[iCnt] = sobj.nextInt();
    }
  }

  public void divisible()
  {
     System.out.println("Elements which are multiples of 11 are : ");

     for(int iCnt = 0; iCnt < Arr.length; iCnt ++)
     {
        if(Arr[iCnt] % 11 == 0)
        {
            System.out.println(Arr[iCnt]);
        }
     }
  }
}