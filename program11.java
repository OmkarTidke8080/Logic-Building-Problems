// Accept number from user and check whether it is even or odd

import java.util.*;

public  class program11
{
     public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        
        System.out.println("Enter Number : ");
        int No = sc.nextInt();

        check ch = new check();
        boolean bRet = ch.CheckEvenOdd(No);

        if(bRet == true)
        {
            System.out.println("Number is even ");
        }
        else
        {
            System.out.println("Number is odd");
        }
        
     }
}


class check
{
    boolean CheckEvenOdd(int iNo)
    {
         if(iNo % 2 == 0)
         {
            return true;
         }
         else
         {
            return false;
         }

        
    }
}