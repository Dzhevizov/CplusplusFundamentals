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

    int nMaxCount = 0;

    for (int i = 0; i < nLenght; i++)
    {
        int nCount = 0;

        for (int j = 0; j < nLenght; j++)
        {
            if (oArray[i] == oArray[j])
                nCount++;
        }

        if (nCount >= nMaxCount)
        {
            nMaxCount = nCount;
        }
    }

    for (int i = 0; i <= 9; i++)
    {
        int nCount = 0;

        for (int j = 0; j < nLenght; j++)
        {
            if (i == oArray[j])
                nCount++;
        }

        if (nCount >= nMaxCount)
        {
            cout << i << " ";
        }
    }
    return 0;
}
