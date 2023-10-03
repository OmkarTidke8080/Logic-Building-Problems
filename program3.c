// Accept two values and perform addition

// Step 1  : Understand the problem statement
// conclusion : we have to accept two integers and perform its addition


// step 2 : Write the alogorithm
/*
    START
        Accept First Number from user and store it into No1
        Accept second number from user and store it into No2
        Create one varibale tp store the result name as answer
        Perform addition of No1 and No2, store the result in Ans
        Display the result from Ans to the user
    STOP 
*/

// Step 3 : Decide the programming language ( C, C++ , Java)
// we select C programming


// Step 4 :  Write the program



#include<stdio.h>

int main()
{

   int a;
   int b;
   int addition;

   printf("Enter number 1 : ");
   scanf("%d",&a);

   printf("Enter number 2 : ");
   scanf("%d",&b);
 
   addition = a + b;

   printf("The Addition is : %d ",addition);


    return 0;
}