// write a java program which accept string from user and display the below pattern

//input : Hello
// output
/*
   H   e  l  l  o
   H   e  l  l
   H   e  
   H  
   H
   H e
   H e l
   H e l l
   H e l l o 
 */

 import java.util.*;

 public class Program4
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

         char Arr[] = new char[50];
        
         Arr = str.toCharArray();

           for(int i = 0; i < Arr.length ; i++)
           {
              for(int j = 0; j < Arr.length - i; j++)
              {
               System.out.print("\t"+Arr[j]);
              }
           System.out.println( );
         }

         for(int i = 0; i < iRow; i++)
         {
            for(int j = 0; j <= i; j++)
            {
                 System.out.print("\t"+Arr[j]);
            }
            System.out.println( );
         }
     }
    
 }