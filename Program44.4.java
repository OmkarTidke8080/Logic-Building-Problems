// Write a java program which accept a array of characters from user and accpet one character from user and return the occurence if that character without cinsiderig the case


import java.util.*;

public class Program3
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the characters : ");
        String str = sobj.nextLine();

        System.out.println("Enter the character to search occurence : ");
        char A = sobj.next().charAt(0);


        MyArray mobj = new MyArray(str);
        mobj.Occurence( str,A);

    }
}
class MyArray
{
  public MyArray(String Arr)
  {

  }

  public void Occurence(String Arr,char A)
  {
     char Brr[];
     Brr = Arr.toCharArray();

    int  VCount = 0;

    for(int i = 0 ; i < Brr.length; i++)
    {
        if( Brr[i] == A)
        {
            VCount++;
        }
    }

    System.out.println("The number of occurence  in the array are : "+VCount);




  }
}