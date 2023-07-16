// write a java program which accept marks of N students from user and display class of each student

import java.util.*;

public class Program4
{
     public static void main(String args[])
     {
         MyArray mobj = new MyArray();
        mobj.Accept();
        mobj.Percentage();
     }
}

class MyArray
{
    int M[];  // marks array
    public void Accept()
    {
       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter the number of students : ");
       int n = sobj.nextInt();

       M = new int[n];

       System.out.println("Enter marks of N students : ");
       for(int i = 0; i < n; i++)
       {
         M[i] = sobj.nextInt();
       }

    }

    void Percentage()
    {
        for(int i = 0; i < M.length; i++)
        {
           if( M[i] < 35)
           {
             System.out.println("Fail");
           }
           else if( M[i] < 50 )
           {
                 System.out.println("Pass Class");

           }
            else if( M[i] < 60 )
           {
              System.out.println("Second Class");

           }
            else if( M[i] < 70 )
           {
             System.out.println("First class");

           }
            else if( M[i] > 70 )
           {
             System.out.println("First class with distinction");

           }


        }
    }
}