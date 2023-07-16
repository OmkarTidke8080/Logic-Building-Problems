// Write a java program which accept number of rows and number of columns from user na ddisplay the following pattern

/*
  input : iRow = 4;
  input : iCol = 4;

  *  *  *  #
  *  *  #  *
  *  #  *  *
  #  *  *  *
 */

 import java.util.*;

 public class Program1
 {
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter rows : ");
        int iRow = sobj.nextInt();

        System.out.println("Enter columns : ");
        int iCol = sobj.nextInt();

        Pattern pobj = new Pattern(iRow, iCol);
        pobj.Pattern(iRow, iCol);


    }
 }
 class Pattern
 {
    public Pattern(int iRow, int iCol)
    {

    }

    public void Pattern(int iRow, int iCol)
    {
       for(int i = 0 ; i < iRow; i++)
       {
        for(int j = 0; j < iCol; j++)
        {
          if( i == iRow - j - 1)
          {
            System.out.print("#" + "\t");
          }
          else
          {
            System.out.print("*"+"\t");
          }
        }
        System.out.println( );
       }
    }
 }