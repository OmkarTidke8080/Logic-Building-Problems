// Write a java program which accept N numbers from user and accept one another number from user as No and return the last Occurnce of the that No

import java.util.*;

public class Program3
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Size of array : ");
        int iSize = sobj.nextInt();

        System.out.println("Enter the Number to check the last occurence");
        int iNo = sobj.nextInt();

        Number nobj = new Number(iSize);

        nobj.Accept(iSize);
      int iRet =   nobj.SearchLastOcc(iSize, iNo);

      System.out.println("The Last occurnece of number is at position " +iRet);



    }
}
class Number
{
    int Arr[];

    public Number(int iSize)
    {
        Arr = new int [iSize];
    }

    public void Accept(int iSize)
    {
        Scanner sobj = new Scanner(System.in);

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public int SearchLastOcc(int iSize, int iNo)
    {
        int iPos = 0;

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] == iNo)
            {
              iPos = iCnt;
            }
        }

        return iPos;
    }
}