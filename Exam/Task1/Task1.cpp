#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int fillArrayAndCountSum(int oArray[], int nSize)
{
    int nSum = 0;
    for (int i = 0; i < nSize; i++)
    {
        cin >> oArray[i];
        nSum += oArray[i];
    }

    return nSum;
}

int main()
{
    int nLenght;
    cin >> nLenght;

    int* oArray = new int[nLenght];

    int nSum = fillArrayAndCountSum(oArray, nLenght);

    if (nLenght == 0)
        return 1;

    int nAverage = nSum / nLenght;

    vector <int> oVector;

    for (size_t i = 0; i < nLenght; i++)
    {
        if (oArray[i] < nAverage && oArray[i] % 2 == 0)
            oVector.push_back(oArray[i]);
    }

    if (oVector.size() == 0)
    {
        cout << "No" << endl;
    }

    else
    {
        sort(oVector.begin(), oVector.end(), greater<int>());

        for (size_t i = 0; i < oVector.size(); i++)
        {
            cout << oVector[i] << " ";
        }

        cout << endl;
    }

    return 0;
}
