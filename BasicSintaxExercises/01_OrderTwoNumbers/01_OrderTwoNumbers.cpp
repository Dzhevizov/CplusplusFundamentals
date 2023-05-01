#include<iostream>
using namespace std;

int main() 
{
    int nNumber1, nNumber2;
    cin >> nNumber1 >> nNumber2;

    if (nNumber1 <= nNumber2)
        cout << nNumber1 << ' ' << nNumber2 << endl;
    else
        cout << nNumber2 << ' ' << nNumber1 << endl;

    return 0;
}