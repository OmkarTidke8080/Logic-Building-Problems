// Write a java program which accept a string from user and display it in reverse order

import java.util.*;

public class Program5
{
    public static void main(String args[])
    {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter String : ");
      String str = sobj.nextLine();

      StringDemo dobj = new StringDemo();

      String Rev =  dobj.Reverse(str);

      System.out.println("Reversed string is : "+Rev);





      
    }
    
}

class StringDemo
{
    public String Reverse(String str)
    {
        char Arr[] = str.toCharArray();
       int iStart = 0;
       int iEnd = Arr.length - 1;
       char cTemp = ' ';

       while(iStart < iEnd)
       {
          cTemp = Arr[iStart];
          Arr[iStart] = Arr[iEnd];
          Arr[iEnd] = cTemp;

          iStart++;
          iEnd--;
       }

       return new String(Arr);
    }
}