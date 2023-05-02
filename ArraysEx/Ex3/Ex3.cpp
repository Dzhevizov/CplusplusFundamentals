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

    int nSum = 0;

    for (int i = 0; i < nLenght; i++)
    {
        nSum += oArray[i];
    }

    int nAverage = nSum / nLenght;

    for (int i = 0; i < nLenght; i++)
    {
        if (oArray[i] >= nAverage)
            cout << oArray[i] << " ";
    }
    return 0;
}
