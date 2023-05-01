#include <iostream>
using namespace std;

int FindSmallestInteger(int nNum1, int nNum2, int nNum3)
{
    int nMinNum;
    if (nNum1 < nNum2)
    {
        if (nNum1 < nNum3)
            nMinNum = nNum1;
        else
            nMinNum = nNum3;
    }
    else
    {
        if (nNum2 < nNum3)
            nMinNum = nNum2;
        else
            nMinNum = nNum3;
    }
    
    return nMinNum;
}


int main()
{
    int nNumber1, nNumber2, nNumber3;
    cin >> nNumber1 >> nNumber2 >> nNumber3;

    int nSmallestNumber = FindSmallestInteger(nNumber1, nNumber2, nNumber3);
    cout << nSmallestNumber << endl;

    return 0;
}
