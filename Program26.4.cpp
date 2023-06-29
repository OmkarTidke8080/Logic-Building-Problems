// Write a program which checks whther 7th 8th 9th bit is on or off


#include<iostream>
using namespace std;

typedef int BOOL;
typedef unsigned int UINT;

BOOL ChkBit(UINT iNo)
{
    UINT iMask =  0X1C0;
    UINT iResult = 0;

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return  true;
    }
    else
    {
        return false;
    }
}

int main()
{
    unsigned  int iValue = 0;
    bool bRet = false;

    cout<<"Enter Number"<<"\n";
    cin>>iValue;

    bRet = ChkBit(iValue);

    if(bRet == true)
    {
        cout<<"7th  8th  9th  Bit is ON"<<"\n";
    }
    else
    {
        cout<<"7th  8th  9th  bit is OFF"<<"\n";
    }

   return 0;
}
