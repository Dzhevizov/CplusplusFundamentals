#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string strInput;
    getline(cin, strInput);

    string strPunctuationSigns = "!\"#$%&\'()*+,-./:;<=>?@[]^_`{}~";

    int nPunctuationCount = 0;

    vector <int> oCounters;

    for (char chLetter : strInput)
    {
        if (chLetter == '|')
        {
            oCounters.push_back(nPunctuationCount);
            nPunctuationCount = 0;
            continue;
        }

        size_t nLocation = strPunctuationSigns.find(chLetter);

        if (nLocation != string::npos)
        {
            nPunctuationCount++;
        }
    }

    sort(oCounters.begin(), oCounters.end());

    int nCurrValue = oCounters[0];
    int nCurrValueSize = 1;

    for (vector<int>::iterator i = oCounters.begin() + 1; i != oCounters.end(); i++)
    {
        if (*i == nCurrValue)
        {
            nCurrValueSize++;
        }

        else
        {
            cout << nCurrValue << " symbol sentences: " << nCurrValueSize << endl;
            nCurrValue = *i;
            nCurrValueSize = 1;
        }
    }

    cout << nCurrValue << " symbol sentences: " << nCurrValueSize << endl;
    return 0;
}
