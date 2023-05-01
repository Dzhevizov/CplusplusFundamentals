#include <iostream>
using namespace std;

void PrintSignOfNumber(int nNumber)
{
    if (nNumber < 0)
        cout << "The number " << nNumber << " is negative." << endl;
    else if (nNumber == 0)
        cout << "The number " << nNumber << " is zero." << endl;
    else
        cout << "The number " << nNumber << " is positive." << endl;
}


int main()
{
    int nNumber;
    cin >> nNumber;

    PrintSignOfNumber(nNumber);
    return 0;
}
