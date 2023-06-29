// Write a program which accept one number from user and toggle 7th and 10th bit of that number. return the modified bit of that number


#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(int iNo)
{
    UINT iPos1 = 7;
    UINT iPos2 = 10;

    UINT iMask1 = 0X00000001;
    UINT iMask2 = 0X00000001;

    UINT iResult = 0;

    iMask1 = iMask1 << (iPos1 - 1);
    iMask2 = iMask2 << (iPos2 - 1);


    iResult = iNo ^ (iMask1 | iMask2);
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