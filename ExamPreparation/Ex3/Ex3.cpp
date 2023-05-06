#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

void readLine(const string &strBuf, vector<string> &oVector)
{
    stringstream iStr(strBuf);
    string strField;

    while (iStr >> strField)
    {
        oVector.push_back(strField);
    }
}


int main()
{
    string strInput;
    getline(cin, strInput);
    
    vector<string> oEntities;

    readLine(strInput, oEntities);

    size_t nNumColumns = oEntities.size();

    while (strInput != "end")
    {
        getline(cin, strInput);

        readLine(strInput, oEntities);
    }

    string strObservedField;

    getline(cin, strObservedField);

    vector<string>::iterator it = find(oEntities.begin(), oEntities.end(), strObservedField);
    size_t nIteratorIdx = it - oEntities.begin();

    vector<string> oColValues;

    for (size_t nIdx = nIteratorIdx; nIdx < oEntities.size(); nIdx += nNumColumns)
    {
        oColValues.push_back(oEntities[nIdx]);
    }

    sort(oColValues.begin(), oColValues.end());

    string strMostOccurrencedValue;
    int nMostOccurrencedCount = 0;

    string strCurrValue = oColValues[0];
    int nCurrCount = 1;

    for (size_t i = 1; i < oColValues.size(); i++)
    {
        if (oColValues[i] == strCurrValue)
        {
            nCurrCount++;
            continue;
        }

        if (nCurrCount > nMostOccurrencedCount)
        {
            strMostOccurrencedValue = strCurrValue;
            nMostOccurrencedCount = nCurrCount;
        }

        strCurrValue = oColValues[i];
        nCurrCount = 1;
    }

    if (nCurrCount > nMostOccurrencedCount)
    {
        strMostOccurrencedValue = strCurrValue;
        nMostOccurrencedCount = nCurrCount;
    }

    cout << strMostOccurrencedValue << " " << nMostOccurrencedCount << endl;
    
    return 0;
}
