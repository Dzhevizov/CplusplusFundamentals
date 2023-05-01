#include <iostream>
using namespace std;

void PrintTriangle(int nNumber)
{
    for (int i = 1; i < nNumber; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << ' ';
        }
        cout << endl;
    }

    for (int i = nNumber; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << ' ';
        }
        cout << endl;
    }
}

int main()
{
    int nNumber;
    cin >> nNumber;

    PrintTriangle(nNumber);
    return 0;
}
