// Write a java program which accept number of rows and columns from user and display below patterns

// input = iRow = 4;   iCol = 4

/*
 *  * * * *
 *  * * * *
 *  * * * *
 *  
 */
 
 import java.util.*;

 public class Program1
 {
    public static void main(String arg[])
    {
       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter numbe rof rows : ");
       int iRow = sobj.nextInt();

       System.out.println("Enter number of columns : ");
       int iCol = sobj.nextInt();

       pattern pobj = new pattern();
       pobj.Pattern(iRow, iCol);
    }
 }
 class pattern
 {
   public void Pattern(int iRow, int iCol)
   {
      int i = 1;
      int j = 1;

      for( i = 1; i <= iRow; i++)
      {
        for( j = 1; j <= iCol; j++)
        {
            System.out.print("\t"+"*");           
        }
              System.out.println( );

      }
   }
 }
