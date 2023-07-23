// Write a program which accept matric from user and display the largext number from both the diagonals

// Write a program which accept matrix from user and one number and return the frequency of that number

import java.util.*;


public class Program3
{
    public static void main(String args[])
    {
      Matrix mobj = new Matrix();
      mobj.MaxDiagonal();
    }
}

class Matrix
{

  int Arr[][];

  void MaxDiagonal()
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

   for(int m = 0; m < iRow; m++)
   {
     if(iMax < Arr[m][m])
     {
        iMax = Arr[m][m];
     }
     if(iMax < Arr[m][iRow - 1 - m])
     {
        iMax = Arr[m][iRow - 1 - m];
     }
   }

   System.out.println("The maxDigonal is : "+iMax);

  }



}