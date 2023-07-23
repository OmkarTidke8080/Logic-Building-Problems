// Write a program which accept a matric from user and return the addition of diagonal elements

import java.util.*;

import javax.sound.sampled.SourceDataLine;

public class Program1
{
    public static void main(String args[])
    {
      Matrix mobj = new Matrix();
      mobj.AddDiagonal();
    }
}

class Matrix
{

  int Arr[][];

  void AddDiagonal()
  {
    Scanner sobj = new Scanner(System.in);


   System.out.println("ENter Numbe of Rows");
   int iRow = sobj.nextInt();

   System.out.println("Enter number of columns \n");
   int iCol = sobj.nextInt();

   Arr = new int[iRow][iCol];

   System.out.println("Enter the elements : ");
   for(int i = 0; i < iRow; i++)
   {
     for(int j = 0; j < iCol; j++)
     {
        Arr[i][j] = sobj.nextInt();
     }
   }

   int iSum = 0;

    for(int i = 0; i < iRow; i++)
   {
     for(int j = 0; j < iCol; j++)
     {
        if(i == j)
        {
            iSum = iSum + Arr[i][j];
        }
     }
   }

   System.out.println("The Sum is : "+iSum);

  }



}