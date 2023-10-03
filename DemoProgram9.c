// Problem Statement : Accept radius form user and calculate the area of circle

// Step 1 : Understand the problem statement 
// Conclusion: We are going to use the formula as PI*R*R

// Step 2 : Algorith
/*
    Start
        Accept radius form user and store into Radius
        Create variable as PI and store value 3.14
        Calculate area PI*Radius*Radius
        Display the value of Area to the user 
    Stop 

*/

#include<stdio.h>

//////////////////////////////////////////////////
//
//  Function name : CalculateArea
//  Description : it is used to calculate area of circle    
//  input : Float 
//  output: float 
//  author name : Swapnil 
//  Date : 02/10/23
//
//
//////////////////////////////////////////////////

    float CalculateArea(float fValue)
    {
      auto float fAns = 0.0f;
      auto float PI = 3.14f;

      fAns = PI *  fValue * fValue;

      return fAns;

    }

    ////////////////////////////////////////    
    //     Entry Point Function 
    //////////////////////////////////////// 
    int main()

    {
        auto float  fRadius=0.0f;
        auto float fArea = 0.0f;

        printf("enter radius :\n");
        scanf("%f",&fRadius);


        fArea = CalculateArea(fRadius);
        
        printf("Area of circle is %f \n", fArea);

        
      
        return 0;
    }