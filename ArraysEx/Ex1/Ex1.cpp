#include <iostream>
using namespace std;

bool areEqual(int oArray1[], int nSize1, int oArray2[], int nSize2)
{
    if (nSize1 != nSize2)
        return false;

    for (int i = 0; i < nSize1; i++)
    {
        if (oArray1[i] != oArray2[i])
            return false;
    }

    return true;
}


void fillArray(int oArray[], int nSize)
{
    for (int i = 0; i < nSize; i++)
    {
        cin >> oArray[i];
    }
}


int main()
{
    int nLength1, nLength2;
    cin >> nLength1;
    int* oArray1 = new int[nLength1];

    fillArray(oArray1, nLength1);

    cin >> nLength2;
    int* oArray2 = new int[nLength2];

    fillArray(oArray2, nLength2);

    if (!areEqual(oArray1, nLength1, oArray2, nLength2))
        cout << "Not equal" << endl;
    else
        cout << "equal" << endl;

    return 0;
}
