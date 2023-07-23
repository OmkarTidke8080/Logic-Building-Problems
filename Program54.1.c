// Write a java program which accept number from user and display below pattern

// input : 5
// output : 5  *  4  *  3  *  2  *  1  *

void DisplayR(int iNo)
{

   if(iNo == 0)
   {
    return 0;
   }

   printf("%d\t * \t",iNo);
   
   DisplayR(iNo - 1);

}    




int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    DisplayR(iValue);




    return 0;
}