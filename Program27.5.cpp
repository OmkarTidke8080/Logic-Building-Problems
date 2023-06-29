// Write a program which accept one number from user and ON its first 4 bits
// return the modified number

#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT ONBit(int iNo)
{
    UINT iResult = 0;
    UINT iPos = 5;
    UINT iMask = 0X00000001;
    UINT iCnt = 0;

    for(iCnt = iMask; iCnt >= iPos; iCnt--)
    {
        iMask = iMask << (iPos - 1);
        iResult = iNo & iMask;

        if(iResult == iMask)
        {
         iResult = iNo ^ iMask;
        }

        return iResult;
    }

    
    


}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    cout<<"Enter number : "<<"\n";
    cin>>iValue;

    iRet = ONBit(iValue);

    cout<<"Result is : "<<iRet<<"\n";








    return 0;
}
