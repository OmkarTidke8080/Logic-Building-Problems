// Write a java program which accept number from user and return the count of even digits

import java.util.*;

public class Program1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
       
        System.out.println("Enter the number : ");
        int num = sobj.nextInt();

        Digit dobj = new Digit(num);
        dobj.CountEven(num);
    }
}

class Digit
{
   public Digit(int num)
   {
      
   }

   public void CountEven(int num)
   {
      int iCount = 0;
      int iDigit = 0;


      while(num != 0)
      {
          iDigit = num % 10;
          if(iDigit % 2 == 0)
          {
            iCount++;
          }
        num = num / 10;
      }

      System.out.println("The number of even digits are : "+iCount);
   }

}