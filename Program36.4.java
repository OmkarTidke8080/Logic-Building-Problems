// Write a java program which accept N number from user and acept  a range Display all the elements from that range

import java.util.*;

public class Program4
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Size of Array : ");
        int iSize = sobj.nextInt();

        System.out.println("Enter first number of range : ");
        int iNo = sobj.nextInt();

        System.out.println("Enyter the second of range : ");
        int iNo2 = sobj.nextInt();

        Number nobj = new Number(iSize);
        nobj.Accept();
        nobj.Display(iNo, iNo2);

    }
}
class Number
{
    int Arr[];

    public Number(int iSize)
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
    
    public void Display(int iNo1,int iNo2 )
    {
        System.out.println("Elements from giver range : ");

       for(int iCnt = 0; iCnt < Arr.length; iCnt++)
       {
         if((Arr[iCnt] >= iNo1) && (Arr[iCnt] <= iNo2))
         {
            System.out.println(Arr[iCnt]);
         }

       }
    }
}