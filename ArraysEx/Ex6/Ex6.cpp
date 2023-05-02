#include <iostream>
#include <cmath>
#include <limits.h>
using namespace std;


void fillArray(int oArray[], int nSize)
{
    for (int i = 0; i < nSize; i++)
    {
        cin >> oArray[i];
    }
}


int main()
{
    int nLenght;
    cin >> nLenght;

    int* oArray = new int[nLenght];

    fillArray(oArray, nLenght);

    int nMinDifference = INT_MAX;

    for (int i = 0; i < nLenght - 1; i++)
    {
        for (int j = i + 1; j < nLenght; j++)
        {
            int nDifference = abs(oArray[i] - oArray[j]);

            if (nDifference <= nMinDifference)
                nMinDifference = nDifference;
        }
    }
    if (nLenght == 0 || nLenght == 1)
        cout << 0 << endl;
    else
        cout << nMinDifference << endl;
    return 0;
}
