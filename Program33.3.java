// Write a java program which accept string from user and check whther it contains vowels in it or not

import java.util.*;


public class Program4
{
   public static void main(String Args[])
   {
     Scanner sobj = new Scanner(System.in);

     System.out.println("Enter String : ");
     String str = sobj.nextLine();

     StringDemo dobj = new StringDemo();

     boolean bRet = false;

     bRet = dobj.ChkVowel(str);

     if(bRet == true)
     {
        System.out.println("True");

     }
     else
     {
        System.out.println("False");
     }



   }
    
}

class StringDemo
{
   public boolean ChkVowel(String str)
   {
      char Arr[] = str.toCharArray();

      for(int iCnt = 0; iCnt < Arr.length; iCnt++)
      {
        if( (Arr[iCnt] == 'a') || (Arr[iCnt] == 'e') || (Arr[iCnt] == 'i') || (Arr[iCnt] == 'o') || (Arr[iCnt] == 'u') || (Arr[iCnt] == 'A') || (Arr[iCnt] == 'E') || (Arr[iCnt] == 'I') || (Arr[iCnt] == 'O') || (Arr[iCnt] == 'U'))
        {
            return true;
        }
        else
        {
            return false;
        }
      }
      return false;
   }
}