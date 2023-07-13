// write a java program which accept string from user and display the below pattern

//input : Hello
// output
/*
   H   e  l  l  o
   H   e  l  l  o
   H   e  l  l  o
   H   e  l  l  o
 */

 import java.util.*;

 public class Program1
 {
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String str = sobj.nextLine();

         System.out.println("Enter Rows : ");
        int iRow = sobj.nextInt();

        pattern pobj = new pattern();
        pobj.Pattern(str,iRow);
    }
 }
 class pattern
 {
     public void Pattern(String str,int iRow)
     {
        int iCnt = 0;

         char Arr[] = new char[50];
        
         Arr = str.toCharArray();

           for(int i = 0; i < iRow; i++)
           {
              for(int j = 0; j < Arr.length; j++)
             {
               System.out.print("\t"+Arr[j]);
             }
           System.out.println( );
         }
     }
    
 }