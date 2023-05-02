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

    for (int i = 0; i < nLenght; i++)
    {
        for (int j = 0; j < nLenght; j++)
        {
            cout << oArray[i] * oArray[j] << " ";
        }
    }
    return 0;
}
