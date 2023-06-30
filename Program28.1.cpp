// write a program which accept onr number and position from user and check whther bit at that position is on or off. if bit is one then return true otherwise return false

#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT CheckBit(int iNo,int iPos)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;

    iMask = iMask << (iPos - 1);

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    UINT iValue = 0;
    bool bRet = false;
    UINT Bit = 0;

    cout<<"Enter number : "<<"\n";
    cin>>iValue;

    cout<<"Enter position : "<<"\n";
    cin>>Bit;

    bRet = CheckBit(iValue,Bit);

    if(bRet == true)
    {
        cout<<"BIt is on"<<"\n";
    }
    else
    {
        cout<<"Bit is OFF "<<"\n";
    }
    





    return 0;
}