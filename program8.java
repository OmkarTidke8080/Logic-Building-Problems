// Accept radius from user and calculate the area of circle

// Step 1 : Understand the problem statement
//  We are going to use the formula PI * r * r
// step 2 : Algorithm
/*
   START
       Accept radius from user and store the RADIUS
       create variable as PI and store value 3.14
       Calculate the area PI * r * r
       Display the value of area to the user
    STOP

*/ 

import java.util.*;

public class program8
{
    public static void main(String[] args) {

        Scanner sc  = new Scanner(System.in);

        System.out.println("Enter Radius of circle : ");
        int R = sc.nextInt();

        area  ar = new area(); 
        float Area = ar.AreaOfCircle(R);

        System.out.printf("Area of circle is : "+Area);
        
    }  
}

class area
{
    int AreaOfCircle(int r)
    {
        
        double Ar = 3.14 * r * r;

        return (int) Ar;
    }
}