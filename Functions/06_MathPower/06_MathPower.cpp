#include <iostream>
#include <cmath>
using namespace std;

int CalcMathPower(int nNum, int nPow)
{
    return pow(nNum, nPow);
}


int main()
{
    int nNumber, nPower;
    cin >> nNumber >> nPower;

    int nResult = CalcMathPower(nNumber, nPower);
    cout << nResult << endl;

    return 0;
}
