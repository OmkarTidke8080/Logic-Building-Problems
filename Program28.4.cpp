// write a program which accept one number from user and position from user and toggle that bit

#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT ToggleBit(int iNo,int iPos)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;

    iMask = iMask << (iPos - 1);

    iResult = iNo ^ iMask;
    return iResult;


   
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

    iRet = ToggleBit(iValue,Bit);

    cout<<"Result is : "<<iRet<<"\n";
    





    return 0;
}