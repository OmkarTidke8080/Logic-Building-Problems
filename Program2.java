// write a java program which accept number from user and return the count of digits in between 3 and 7

import java.util.*;


public class Program2
{
     public static void main(String args[])
     {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number : ");
        int num = sobj.nextInt();

        Digit dobj = new Digit(num);
        dobj.Between(num);
     }
    
}
class Digit
{
    public Digit(int num)
    {
      
    }

    public void Between(int num)
    {
       int iCount = 0;
       int iDigit = 0;


       while(num != 0)
       {
          iDigit = num % 10;
          if( (iDigit > 3) && (iDigit < 7) )
          {
            iCount++;
          }
          num = num / 10;
       }

       System.out.println("The number of digits between 3 and 7 are : "+iCount);
    }
}