//write a java program which accept a matrix and check whether the matrix is identity matrix or not

import java.util.Scanner;

public class Program3
{
    public static void main(String args[])
    {
        boolean bRet = false;
        matrix mobj = new matrix();
      bRet =   mobj.identity();

      if(bRet == true)
      {
        System.out.println("It is identity matrix ");
      }
      else
      {
        System.out.println("It is not a identity matrix");
      }
    }
}

class matrix
{
    int[][] Arr;

    boolean identity()
    {
        Scanner sobj = new Scanner((System.in));

        System.out.println("Enter number of rowss : ");
        int iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        int iCol = sobj.nextInt();

        Arr = new int[iRow][iCol];

        // matrix should be the square matrix
       if(iRow != iCol)
       {
        System.out.println("Matrix Should be Square matrix");
        return false;
       }

       System.out.println("Enter the elemets : ");
    
        for(int i = 0; i < iRow; i++)
        {
            for(int j = 0; j < iCol; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }

        // check diagonal elements

        for(int m = 0; m < iRow; m++)
        {
            for(int n = 0; n < iCol; n++)
            {
                if((m == n) && (Arr[m][n] != 1))
                {
                   return false;
                }
                else if(iRow != iCol && Arr[m][n] != 0)
                {
                    return false;
                }
            }          
        }
        return true;
       
    }
}