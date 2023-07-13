// Write a program which accpet 2 tring from user and cheack whether the first N characters of two string are equal or not

import java.util.*;

public class Program2
{
    public static void main(String args[]) 
    
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("ENter String 1 : ");
        String str1 = sobj.nextLine();

        System.out.println("Enter string 2 : ");
        String str2 = sobj.nextLine();

        System.out.println("Enter the value of N : ");
        int N = sobj.nextInt();

        StringDemo dobj = new StringDemo(str1,str2,N);
        boolean bRet = false;

         bRet = dobj.strnCmpX(str1,str2,N);

        if(bRet == true)
        {
            System.out.println("TRue");
        }
        else
        {
            System.out.println("False");
        }
    }
}
class StringDemo
{
    char Arr[];
    char Brr[];

  public StringDemo(String str1, String str2, int N)
  {
     char Arr[] = str1.toCharArray();
     char Brr[] = str2.toCharArray();
  }

  public boolean strnCmpX(String src, String dest, int N)
  {
     for(int iCnt = 0; iCnt < N; iCnt++)
     {
        if(Arr[iCnt] == (Brr[iCnt]))
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