// write a java program which accept string from user and display the below pattern

//input : Hello
// output
/*
   
   H * * * *
   H e * * *
   H e l * *
   H e l l * 
 */

 import java.net.SocketTimeoutException;
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

         
          for(int i = 0; i < iRow; i++)
          {
            for(int j = 0; j < iCol; j++)
            {
                if(i < j)
                {
                    System.out.print("\t"+"*");
                }
                else
                {
                    System.out.print("\t"+Arr[j]);
                }
            }
            System.out.println();
          }
        
        
    }
}
    
 