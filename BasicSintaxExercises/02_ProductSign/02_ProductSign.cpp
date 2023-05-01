#include <iostream>
using namespace std;

int main()
{
    double dNumber1, dNumber2, dNumber3;
    cin >> dNumber1 >> dNumber2 >> dNumber3;

    if (dNumber1 == 0 || dNumber2 == 0 || dNumber3 == 0)
    {
        cout << '+' << endl;
        return 0;
    }
        
    int nMinusCount = 0;
    if (dNumber1 < 0)
        nMinusCount += 1;
    if (dNumber2 < 0)
        nMinusCount += 1;
    if (dNumber3 < 0)
        nMinusCount += 1;

    if (nMinusCount % 2 == 0)
        cout << '+' << endl;
    else
        cout << '-' << endl;

    return 0;
}
