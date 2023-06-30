// write a program which accpt one number from user and position and off that bit. return modified number


#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT OFFBit(int iNo,int iPos)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;

    iMask = iMask << (iPos - 1);

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return iNo ^ iMask;
    }
    else
    {
        return iNo;
    }
}

int main()
{
    UINT iValue = 0;
    UINT iRet = false;
    UINT Bit = 0;

    cout<<"Enter number : "<<"\n";
    cin>>iValue;

    cout<<"Enter position : "<<"\n";
    cin>>Bit;

    iRet = OFFBit(iValue,Bit);

    cout<<"Result is : "<<iRet<<"\n";
    





    return 0;
}