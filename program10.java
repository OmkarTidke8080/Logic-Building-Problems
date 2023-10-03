// Accept number from user and return the cube of the number

import java.util.*;

public class program10 {
    public static void main(String[] args) {
         Scanner sc = new Scanner(System.in);

         System.out.println("Enter number to calculate : ");
         int No = sc.nextInt();

         cube c = new cube();
         int Ans = c.CalculateCube(No);
         
         System.out.println("The cube of number is : "+Ans);
 
    }
}

class cube
{
    int CalculateCube(int No)
    {

        float Ans = No * No * No;

        return (int)Ans;
    }
}