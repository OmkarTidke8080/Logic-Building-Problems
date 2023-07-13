// Accept string from user and check whther the string is palindrome or not

import java.util.*;

public class Program5
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String str = sobj.nextLine();

        boolean bRet = false;

        StringDemo dobj = new StringDemo();

        bRet = dobj.Palindrome(str);

        if(bRet == true)
        {
            System.out.println("String is palindrome ");
        }
        else
        {
             System.out.println("String is not palindrome ");
        }
    }
}
class StringDemo
{
    public boolean Palindrome(String str)
    {
      char Arr[] = str.toCharArray();

      int iStart = 0;
      int iEnd = Arr.length - 1 ;

      while(iStart < iEnd)
      {
         char temp = Arr[iStart];

         Arr[iStart] = Arr[iEnd];
         Arr[iEnd] = temp;

         iStart++;
         iEnd--;

         if(Arr[iStart] != Arr[iEnd])
         {
            return false;
         }
      }

      return true;
    }
}