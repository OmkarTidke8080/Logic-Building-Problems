// write a java program which accept string from user and display the below pattern

//input : Hello
// output
/*
   
   H e l l o
   H e l l *
   H e l * *
   H e * * *
   H * * * *
 */

import java.util.*;

 public class Program2
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
            for(int j = 1; j <= iCol; j++)
            {
                if(i <= j)
                {
                    System.out.print("*"+"\t");
                }
                else
                {
                    System.out.print(Arr[j]+"\t");
                }
            }
            System.out.println();
          }
       
        
    }
}
    
 