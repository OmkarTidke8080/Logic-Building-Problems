// write a java program which accept number from user and retrun the count of odd digits

import java.io.OutputStream;
import java.util.*;

public class Program3
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        int num = sobj.nextInt();

        Digit dobj = new Digit(num);
        dobj.OddCount(num);
    }
}
class Digit
{
   public Digit(int num)
   {

   }

   public void OddCount(int num)
   {
      int iDigit = 0;
      int iCount = 0;

      while(num != 0)
      {
        iDigit = num % 10;
        if( iDigit % 2 != 0)
        {
            iCount++;
        }
        num = num / 10;
      }

      System.out.println("The number of odd elements are : "+iCount);
   }
}