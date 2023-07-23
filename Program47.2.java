// Write a program which accept matrix from user and one number and return the frequency of that number

import java.util.*;


public class Program2
{
    public static void main(String args[])
    {
      Matrix mobj = new Matrix();
      mobj.Frequency();
    }
}

class Matrix
{

  int Arr[][];

  void Frequency()
  {
    Scanner sobj = new Scanner(System.in);


   System.out.println("ENter Numbe of Rows");
   int iRow = sobj.nextInt();

   System.out.println("Enter number of columns \n");
   int iCol = sobj.nextInt();

   System.out.println("Enter the number to check frequency : ");
   int iNo = sobj.nextInt();

   Arr = new int[iRow][iCol];

   System.out.println("Enter the elements : ");
   for(int i = 0; i < iRow; i++)
   {
     for(int j = 0; j < iCol; j++)
     {
        Arr[i][j] = sobj.nextInt();
     }
   }

   int iFreq = 0;

    for(int i = 0; i < iRow; i++)
   {
     for(int j = 0; j < iCol; j++)
     {
        if(Arr[i][j] == iNo)
        {
            iFreq++;
        }
     }
   }

   System.out.println("The Frequency is : "+iFreq);

  }



}