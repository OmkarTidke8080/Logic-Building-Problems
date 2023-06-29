// Write a program which checks whether first and last bit is on or off. first bit means number 1 and last bit means bit number 32


#include<iostream>
using namespace std;

typedef int BOOL;
typedef unsigned int UINT;

BOOL ChkBit(UINT iNo)
{
    UINT iMask =  0X80000001;
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
        cout<<"1st  and  32th  Bit is ON"<<"\n";
    }
    else
    {
        cout<<"1st  and  32th  bit is OFF"<<"\n";
    }

   return 0;
}
