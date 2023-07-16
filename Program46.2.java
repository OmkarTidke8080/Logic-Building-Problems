// Write a java program which accept array from user and replace each member with its summation of digits


import java.util.*;

 class program2
{
    public static void main(String args[])
    {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter the size of array : ");
      int iSize = sobj.nextInt();

      
      MyArray mobj = new MyArray(iSize);
      mobj.Accept();
      mobj.Summation();

    }
}
class MyArray
{
    int Arr[];
    public MyArray(int iSize)
    {
      Arr = new int[iSize];
    }
    public void Accept()
    {
       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter the elements : ");
       for(int i = 0; i < Arr.length; i++)
       {
         Arr[i] = sobj.nextInt();
       }
    }

    void Summation()
    {
        int iDigit = 0;
        int iSum = 0;
        
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            while(Arr[iCnt] != 0)
            {
                iDigit = Arr[iCnt] % 10;
                iSum = iSum + iDigit;
                Arr[iCnt] = Arr[iCnt] / 10;
            }

            System.out.println(iSum);
        }
    }
   
    
}