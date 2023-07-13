// write  a java program which accept a string from user and count the number of small characters 

import java.util.*;


public class Program2
{
    public static void main(String args[])
    {
    Scanner sobj = new Scanner(System.in);
    
    System.out.println("Enter String : ");

    String str = sobj.nextLine();

    StringDemo dobj = new StringDemo();

    int iRet  = dobj.CountSmall(str);

    System.out.println("Number of small characters are : "+iRet);
    }
    
}

class StringDemo
{
    public int CountSmall(String str)
    {
      int iCount = 0;

      char Arr[] = str.toCharArray();

      for(int iCnt = 0; iCnt < Arr.length; iCnt++)
      {
        if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
        {
            iCount++;
        }
      }

      return iCount;
    }
}