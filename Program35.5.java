// write a java program which accept number from user and return differnce between summation of even digits and summation of odd digits

import java.util.*;


public class Program5
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        int num = sobj.nextInt();

        Digit dobj = new Digit(num);

         dobj.CountDiff(num);
    }
}
class Digit
{
    public Digit(int num)
    {

    }

    public void CountDiff(int num)
    {
      int iDigit = 0;
      int Diff = 0;
      int EvenSum = 0;
      int OddSum = 0;

      while(num != 0)
      {
        iDigit = num % 10;
        if(iDigit % 2 == 0)
        {
            EvenSum = EvenSum + iDigit;
        }
        else if(iDigit % 2 != 0)
        {
            OddSum = OddSum + iDigit;
        }
        num = num / 10;
      }

         Diff = EvenSum - OddSum;

         System.out.println("Diiference is : "+Diff);
    }
}