// Write a java program which accept 3 strings from user and concat N characters of second string after first string. Value of N should bw accepted from user 

import java.util.*;


public class Program1
{
    public static void main(String args[])
    {
       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter String 1 : ");
       String str1 = sobj.nextLine();

       System.out.println("Enter String 2 : ");
       String str2 = sobj.nextLine();

       System.out.println("Enter number of character to concat : ");
       int n = sobj.nextInt();

       StringDemo dobj = new StringDemo(str1,str2,n);
    }
}

class StringDemo
{
    char Arr[];
    char Brr[];

     Arr = src.toCharArray();
     Brr = dest.toCharArray(); 

  public  StringDemo(String src, String dest, int n)
  {
        Arr = new char[Arr.length];
        Brr = new char[Brr.length];
  }
  
  public void strNCatX(String src, String dest, int n)
  {
     for(int iCnt = 0; iCnt < n; iCnt++)
     {
        n++;
     }
  }

}