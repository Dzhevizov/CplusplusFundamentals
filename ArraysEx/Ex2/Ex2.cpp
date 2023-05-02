#include <iostream>
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

    int nMaxSize = 1, nMaxNumber = 0, nCurrSize = 1;

    for (int i = 0; i < nLenght; i++)
    {
        if (i == nLenght - 1)
        {
            if (nMaxSize == nCurrSize)
                nMaxNumber = oArray[i];
            break;
        }

        if (oArray[i] == oArray[i + 1])
            nCurrSize++;
        else
        {
            if (nCurrSize >= nMaxSize)
            {
                nMaxSize = nCurrSize;
                nMaxNumber = oArray[i];
                nCurrSize = 1;
            }
        }
    }

    for (int i = 0; i < nMaxSize; i++)
    {
        cout << nMaxNumber << " ";
    }

    return 0;
}
