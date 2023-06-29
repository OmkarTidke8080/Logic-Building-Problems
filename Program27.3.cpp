// write a program which accept one number from user and toggle the 7th bit of that number. return the modified number

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(int iNo)
{
    UINT iPos = 7;
    UINT iMask = 0X00000001;
    UINT iResult = 0;

    iMask = iMask << (iPos - 1);

    iResult = iNo ^ iMask;
    return iResult;

}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    cout<<"Enter Number : "<<"\n";
    cin>>iValue;

    iRet = ToggleBit(iValue);
    cout<<"Result is : "<<iRet<<"\n";


    return 0;
}
