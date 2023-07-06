// write a java program which accept N numbers rom user and return thw diffrence between summation of even elements and summation of odd elements

import java.util.*;

import javax.sound.sampled.SourceDataLine;

public class Program1
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array");
        int iSize = sobj.nextInt();

        ArrayDemo aobj = new ArrayDemo(iSize);
        aobj.Accept();
        aobj.diffrence();
    }
}

class ArrayDemo
{
    public int Arr[];  // array declaration

   public ArrayDemo(int iSize)  //  constructor with same name as class
   {
      Arr = new int[iSize]; // array memory allocation
   }
   
   public void Accept()
   {
    Scanner sobj = new Scanner(System.in); //  scanner object to receive Array elements

    System.out.println("Enter the array elements : ");

    // for loop to accept elements
    for(int iCnt = 0; iCnt < Arr.length; iCnt++)
    {
        Arr[iCnt] = sobj.nextInt();
    }
   }

    public void diffrence()
    {
        int EvenSum = 0;
        int OddSum = 0;
        int Diff = 0;


        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] % 2 == 0)
            {
                EvenSum = EvenSum + Arr[iCnt];            
            }
            else if(Arr[iCnt] % 2 != 0)
            {
                OddSum = OddSum + Arr[iCnt];
            }
        }
        System.out.println("Sum of even elements is : "+EvenSum);
        System.out.println("Sum of Odd elements : "+OddSum);
        Diff = EvenSum - OddSum;

        System.out.println("Differnece between Even and Odd elements : "+Diff);

    }

    

   
     


      

    


}