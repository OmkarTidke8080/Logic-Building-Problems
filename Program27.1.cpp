// Write a program which accepts one number from user and off the 7th bit of that number if it is on.
// return the modified number

#include<iostream>
using namespace std;

typedef unsigned int UINT;

int OFFBit(int iNo)
{
    UINT iMask = 0X00000040;
    UINT iResult = 0;

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return (iNo ^ iMask);
    }
    else
    {
        return iNo;
    }
}


int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    cout<<"Enter number"<<"\n";
    cin>>iValue;

    iRet = OFFBit(iValue);

    cout<<"Result is  : "<<iRet<<"\n";


   











    return 0;
}
