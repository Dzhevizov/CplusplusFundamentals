#include <iostream>
using namespace std;

int main()
{
    int nNumber1, nNumber2;
    cin >> nNumber1 >> nNumber2;

    while (nNumber1 != 0 && nNumber2 != 0)
    {
        int temp = nNumber2;
        nNumber2 = nNumber1 % nNumber2;
        nNumber1 = temp;
    }

    if (nNumber1 == 0)
        cout << nNumber2 << endl;
    else
        cout << nNumber1 << endl;

    return 0;
}
