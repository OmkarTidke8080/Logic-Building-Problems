// Write a java program which accept array of characters from user and count the number of vowels in it

import java.util.*;

public class Program2
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the characters : ");
        String str = sobj.nextLine();

       

        MyArray mobj = new MyArray(str);
        mobj.CountVowel( str);




    }
}
class MyArray
{
  public MyArray(String Arr)
  {

  }

  public void CountVowel(String Arr)
  {
     char Brr[];
     Brr = Arr.toCharArray();

    int  VCount = 0;

    for(int i = 0 ; i < Brr.length; i++)
    {
        if( (Brr[i] == 'a') || (Brr[i] == 'e') || (Brr[i] == 'i') || (Brr[i] == 'o') || (Brr[i] == 'u') || (Brr[i] == 'A') ||  (Brr[i] == 'E') || (Brr[i] == 'I') || (Brr[i] == 'O') ||  (Brr[i] == 'U') )
        {
            VCount++;
        }
    }

    System.out.println("The number of vowels in the array are : "+VCount);




  }
}