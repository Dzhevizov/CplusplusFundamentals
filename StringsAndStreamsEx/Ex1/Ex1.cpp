#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void fillArray(int oArray[], int nSize, string strInput)
{
    istringstream oStream(strInput);

    for (int i = 0; i < nSize; i++)
    {
        oStream >> oArray[i];
    }
}

bool compareArrays(int oArray1[], int nSize1, int oArray2[], int nSize2)
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

int main()
{
    string strFirstLine, strSecondLine;
    getline(cin, strFirstLine);
    getline(cin, strSecondLine);
    
    int nLenghtFirstArray = strFirstLine.length();
    int nLenghtSecondArray = strSecondLine.length();

    int* oFirstArray = new int[nLenghtFirstArray];
    int* oSecondArray = new int[nLenghtSecondArray];

    fillArray(oFirstArray, nLenghtFirstArray, strFirstLine);
    fillArray(oSecondArray, nLenghtSecondArray, strSecondLine);

    bool areEqual = compareArrays(oFirstArray, nLenghtFirstArray, oSecondArray, nLenghtSecondArray);

    if (!areEqual)
        cout << "not equal" << endl;
    else
        cout << "equal" << endl;

    return 0;
}
