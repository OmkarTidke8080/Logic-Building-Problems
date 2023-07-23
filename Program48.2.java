// Write a program which accept matrix from user and reverse the contents of each row

import java.util.*;


public class Program2
{
    public static void main(String args[])
    {
        matrix mobj = new matrix();
        mobj.Reverse();
    }
}
class matrix
{
    int[][] Arr;
    int iRow = 0;
    int iCol = 0;

    void Reverse()
    {
        Scanner sobj = new Scanner(System.in);
     
        // Accept values
        
        System.out.println("Enter number of Rows : ");
        int iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
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

        // Display the elements
        for(int i = 0; i < iRow; i++)
        {
            for(int j = 0; j < iCol; j++ )
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println( "");
        }
    

        // Display the elements in reverse order

        
    


        

    }
}