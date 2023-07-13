// write a java program which accept N number from user and return produxt of all elements 

import java.util.*;

public class Program5
{
    public static void main(String args[])
    {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter Size of array : ");
      int iSize = sobj.nextInt();

      Number nobj = new Number(iSize);
      nobj.Accept();
      nobj.OddSum(iSize);
    }
    
}

class Number
{
    int Arr[];

    public Number(int iSize)
    {
        Arr = new int [iSize];
    }
    
    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);  
        System.out.println("Enter the alements : ");
        
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }
    public void OddSum(int iSize)
    {
        int iSum = 0;

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if( (Arr[iCnt] % 2 != 0))
            {
                iSum = iSum + Arr[iCnt];
            }
        }

        System.out.println("The Sum of all odd elements is : "+iSum);
    }
}
