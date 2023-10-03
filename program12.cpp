// Accept marks from student and calculate percentage 

#include<iostream>
using namespace std;

int CalculatePercentage(float iMarks1, float iMarks2)
{
   float Percentage = (iMarks1/iMarks2) * 100;

   return Percentage;

}

int main()
{
   float iMarks1 = 0.0f;
   float outoffMarks = 0.0f;

   cout<<"Enter Marks obtained"<<"\n";
   cin>>iMarks1;

   cout<<"Enter total marks"<<"\n";
   cin>>outoffMarks;

   int iPercentage = CalculatePercentage(iMarks1,outoffMarks);

   cout<<"The Percentage obtained is : "<<iPercentage<<"\n";

    return 0;
}