// write a java program which accept array of character from user and return the difference between frequency of capital and frequency of small character 

import java.util.*;

public class Program4
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);


       System.out.println("enter the characters  of  array : ");
       
       String Arr = sobj.nextLine();
       
        MyArray mobj = new MyArray(Arr);
        mobj.Difference(Arr);
    }

}
class MyArray
{

   public MyArray(String Arr)
   {

   }

    void Difference(String Arr)
    {
       char Brr[];
       Brr = Arr.toCharArray();

       int CCount = 0;  // capital count
       int SCount = 0;  // small Count
         
        for(int i = 0; i < Brr.length; i++)
        {
            if( (Brr[i] >= 'A') && (Brr[i] <= 'Z'))
            {
                CCount++;
            }
            else if((Brr[i] >= 'a') && (Brr[i] <= 'z'))
            {
                SCount++;
            }
        }

        int Diff = 0;
        Diff  = CCount - SCount;

        System.out.println("The Differnec is  : "+Diff);
        
    }
}