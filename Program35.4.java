// Write a java program which accept number from user and return the multiplication of all digits

import java.util.*;

public class Program4
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        int num = sobj.nextInt();

        Digit dobj = new Digit(num);
        dobj.multiplication(num);

    }
}
class Digit
{
    public Digit(int num)
    {

    }

    public void multiplication(int num)
    {
       int iMult = 1;
       int iDigit = 1;

       while(num != 0)
       {
          iDigit = num % 10;
          iMult = iMult * iDigit;
          num = num / 10;
       }
       System.out.println("The multiplication of digits is : "+iMult);
    }
}