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

// Step 5 :  test the program

#include<stdio.h>


int Addition(int iNo1, int iNo2)
{
    int iAns = 0;

    iAns = iNo1 + iNo2;

    return iAns;
}

int main()
{

   auto int iNo1 = 0;
   auto int iNo2 = 0;
   auto int iAns = 0;
   auto int iRet = 0;

   printf("Enter number 1 : ");
   scanf("%d",&iNo1);

   printf("Enter number 2 : ");
   scanf("%d",&iNo2);

   iRet = Addition(iNo1, iNo2);

   printf("The Addition is : %d ",iRet);


    return 0;
}