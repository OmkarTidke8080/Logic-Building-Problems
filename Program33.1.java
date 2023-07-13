// Write a java program which accept a string from user and count the number of capital characters

import java.util.*;


public class Program1
{
    public static void main(String args[])
    {
      Scanner sobj = new Scanner(System.in);


      System.out.println("Enter String : ");
      String str = sobj.nextLine();

      StringDemo dobj = new StringDemo();
      int iRet = dobj.CountCapital(str);

      System.out.println("Number of capital character are : "+iRet);



    }  
}

class StringDemo
{
   public int CountCapital(String str)
   {
     int iCount = 0;

     char[] Arr = str.toCharArray();

     for(int iCnt = 0; iCnt < str.length(); iCnt++)
     {
        if((Arr[iCnt] >= 'A') && Arr[iCnt] <= 'Z')
        {
          iCount++;
        }
     }

     return iCount;
   }
}