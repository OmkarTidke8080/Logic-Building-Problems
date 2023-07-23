// Write a program which accept matrix and display the addition of elements from each column

// Write a program which accept matric from user and display the largext number from both the diagonals

// Write a program which accept matrix from user and one number and return the frequency of that number

import java.util.*;


public class Program4
{
    public static void main(String args[])
    {
      Matrix mobj = new Matrix();
      mobj.AddColumn();
    }
}

class Matrix
{

  int Arr[][];

  void AddColumn()
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

   int iMax = 0;

    for(int i = 0; i < iRow; i++)
   {
     for(int j = 0; j < iCol; j++)
     {
       System.out.print(Arr[i][j]+"\t");
     }
     System.out.println( );
   }

   int iSum = 0;
   for(int i1 = 0; i1 < iRow; i1++)
   {
     for(int j1 = 0; j1 < iCol;)
     {
        iSum = iSum + Arr[i1][j1];
     }
     System.out.println("\t"+iSum);
   }


  }



}