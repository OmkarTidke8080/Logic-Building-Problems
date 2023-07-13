// Accept a string from user and reverse the contents of thar string by toggling case

import java.util.*;

public class Program4
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String str = sobj.nextLine();
       
        StringDemo dobj = new StringDemo();
        String rev = dobj.Reverse(str);

        System.out.println("reversed string is : "+rev);


    }
}
class StringDemo
{
   

    public String Reverse(String str)
    {
        char  Arr[] = str.toCharArray();

        char temp = ' ';

        int iStart = 0;
        int iEnd = Arr.length-1;

        while(iStart < iEnd)
        {
            if((Arr[iStart] >= 'a') && (Arr[iStart] <= 'z') )
            {
                Arr[iStart] = (char) (Arr[iStart] - 32);
            }
            else if((Arr[iStart] >= 'A') && (Arr[iStart] <= 'Z'))
            {
                Arr[iStart] = (char) (Arr[iStart] + 32);

            }
            temp = Arr[iStart];

            Arr[iStart] = Arr[iEnd];
            Arr[iEnd] = temp;

            iStart++;
            iEnd--;
        }

        return new String(Arr);
    }
}