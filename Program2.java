// write  a program which accept number form user and display the below pattern

/*
 input : 7846

 output :       7  8  4  6
                7  8  4  6
                7  8  4  6
                7  8  4  6
 */

 import java.util.*;

 public class Program2
 {
    public static void main(String args[])
    {
      MyArray mobj = new MyArray();
      mobj.Pattern();
    }
 }
 class MyArray
 {
    void Pattern()
    {
       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter the Number : ");
       int num = sobj.nextInt();

       System.out.println("Enter the number of  Rows : ");
       int iRow = sobj.nextInt();

      

     
       for(int i = 0; i < iRow; i++)
       {
        for(int j = 0; j < iRow; j++)
        {
          System.out.print("\t"+num+"\t");
        }
        System.out.println();
       }
       



    }
 }