// write a java program which accept array of characters and display the count of capital character

import java.util.*;

public class Program3
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        CharArray cobj = new CharArray();
        cobj.Accept();
        cobj.CountCapital();
    }
}
class CharArray
{
    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter the array of charcaters : ")
    String str = sobj.nextLine();

        char Arr[];


    void Accept()
    {

        Arr = str.toCharArray();
    }
    
    void CountCapital()
    {
        int CCount = 0;

        for(int i = 0; i < Arr.length; i++)
        {
           if( (Arr[i] >= 'A') && (Arr[i] <= 'Z') )
           {
              CCount++;
           }
        }

        System.out.println("The number of capital characters is : "+CCount);
    }
}