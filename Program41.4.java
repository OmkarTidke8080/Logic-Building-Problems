// write a java program which accept string from user and display the below pattern

//input : Hello
// output
/*
   h  e  l  l  o
   h  e  l  l  *
   h  e  l  *  *
   H  e  *  *  *
   H  *  *  *  *
   H  e  *  *  *
   H  e  l  *  *
   H  e  l  l  *
   h  e  l  l  o
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

        System.out.println("Enter Columns : ");
        int iCol = sobj.nextInt();

        pattern pobj = new pattern();
        pobj.Pattern(str,iRow,iCol);
    }
 }
 class pattern
 {
     public void Pattern(String str,int iRow,int iCol)
     {

         char Arr[] = new char[50];
        
         Arr = str.toCharArray();

         
         for(int i = iRow; i >= 1; i--)
         {
            for(int j = 1; j <= i; j++)
            {
                
                 System.out.print(Arr[j]+"\t");  
                
            }
            System.out.println( );
         }

         for(int i = 1; i <= iRow; i++)
         {
            for(int j = 1; j <= i; j++)
            {
                System.out.print(Arr[j]+"\t");
            }
            System.out.println();
         }
        
    }
}
    
 