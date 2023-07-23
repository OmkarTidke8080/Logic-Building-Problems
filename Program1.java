// write  a program which accept number form user and display the below pattern

/*
 input : 7846

 output :       6  4  8  7
                6  4  8  7
                6  4  8  7
                6  4  8  7
 */

 import java.util.*;

 public class Program1
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

       int iDigit = 0;
       int reverse = 0;

       while(num != 0)
       {
        iDigit = num % 10;
        reverse = (reverse * 10) + iDigit;
        num = num / 10;
       }
         
       for(int i = 0; i < iRow; i++)
       {
          System.out.println(reverse+"\t");
       }
       



    }
 }