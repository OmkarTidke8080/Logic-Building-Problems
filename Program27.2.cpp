// Write a program which accepts one number from user and off the 7th bit and 10th bit of that number if it is on.
// return the modified number

#include<iostream>
using namespace std;

typedef unsigned int UINT;

int OFFBit(int iNo)
{
    UINT iMask1 = 0X00000040;
    UINT iMask2 = 0X00000240;
    UINT iResult = 0;

    UINT iPos1 = 6;
    UINT iPos2 = 9;

    UINT iMask =  0X00000000;

    iMask1 = iMask1 << (iPos1);
    iMask2 = iMask2 << (iPos2);

    iMask = iMask1 | iMask2;

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return iResult;
    }
    else
    {
        return  iNo;
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
