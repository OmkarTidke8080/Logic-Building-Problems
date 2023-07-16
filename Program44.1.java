// Write a java program which accept array of characters from user and replace each capital character with its corresponding small characters

import java.util.*;

public class Program1
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

       System.out.println("enter the   characters  of  array : ");
       
       String Arr = sobj.nextLine();
    
        MyArray mobj = new MyArray(Arr);
        mobj.Replace(Arr);
    }

}
class MyArray
{

   public MyArray(String Arr)
   {

   }

    void Replace(String Arr)
    {
       char Brr[];
       Brr = Arr.toCharArray();
         
        for(int i = 0; i < Brr.length; i++)
        {
            if( (Brr[i] >= 'A') && (Brr[i] <= 'Z'))
            {
                 Brr[i]  = (char) (Brr[i]+ 32);
            }
        }

        System.out.println("Array after repalcing capital characters is : ");
        for(int j = 0; j < Brr.length; j++)
        {
            System.out.println(Brr[j]);
        }
    }
}