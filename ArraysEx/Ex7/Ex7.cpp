#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    string strInput;
    getline(cin, strInput, '.');

    string strNumber = "";

    for (int i = 0; i < strInput.length(); i++)
    {
        if (strInput[i] < '0' || strInput[i] > '9')
            continue;

        strNumber += strInput[i];
    }

    int nNumber = stoi(strNumber);
    double dRoot = sqrt(nNumber);

    cout << dRoot << endl;

    return 0;
}
