// Write a java program which accept N number from user and display all such elements which are divisible by 3 and 5

import java.util.*;
public class Program4
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array : ");
        int iSize = sobj.nextInt();

        ArrayDemo dobj = new ArrayDemo(iSize);
        dobj.Accept();
        dobj.Divisible();
        
    }
}

class ArrayDemo
{
    int Arr[];

    public ArrayDemo(int iSize)
    {
        Arr = new int[iSize];
    }

    void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the elements of array : ");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
          Arr[iCnt] = sobj.nextInt();
        }
    }

    public void Divisible()
    {
        System.out.println("The elements which are dividible by 3 and 5 are : ");

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if( (Arr[iCnt] % 3 == 0) && (Arr[iCnt] % 5 == 0))
            {
                System.out.println(Arr[iCnt]);
            }
        }
    }
}
