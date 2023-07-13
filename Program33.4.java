// Write a java program which accept tring from user and count return the diffrence between frequency of small character and frequency of capital character


import java.util.*;


public class Program3
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String str = sobj.nextLine();

        StringDemo dobj = new StringDemo();

        int iRet = dobj.CountDiff(str);

        System.out.println("Difference is : "+iRet);

    }
}

class StringDemo
{
    public int CountDiff(String str)
    {
      int SCount = 0;
      int CCount = 0;
      int Diff = 0;

      char Arr[] = str.toCharArray();

      for(int iCnt = 0; iCnt < Arr.length; iCnt++)
      {
         if( (Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
         {
            SCount ++;          
         }
         else if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
         {
            CCount++;
         }

      }

      Diff = CCount - SCount;


      return Diff;
    }
}