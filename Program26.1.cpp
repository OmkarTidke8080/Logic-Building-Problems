// Write  a program which checks whether 15th bit is on or off

#include<iostream>
using namespace std;

typedef int BOOL;
typedef unsigned int UINT;

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0X4000;
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
        cout<<"15th Bit is ON"<<"\n";
    }
    else
    {
        cout<<"15th bit is OFF"<<"\n";
    }

   return 0;
}
