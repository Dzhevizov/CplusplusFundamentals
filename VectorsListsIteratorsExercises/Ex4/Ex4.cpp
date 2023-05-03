#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int convertTimeInMinutes(string strTime)
{
    string strHours, strMinutes;
    for (int i = 0; i < 4; i++)
    {
        char chCurrChar = strTime[i];
        if (i < 2)
            strHours += chCurrChar;
        else
            strMinutes += chCurrChar;
    }

    int nMinutes = stoi(strHours) * 60 + stoi(strMinutes);

    return nMinutes;
}

int main()
{
    int nBusCount = 0;
    cin >> nBusCount;

    string strBusTimes, strTrainTime;

    cin.ignore();
    getline(cin, strBusTimes);

    cin >> strTrainTime;

    istringstream oBusTimes(strBusTimes);

    int nShortestWaiting = 1440;
    int nBestBus = 0;

    string strCurrTime;
    int nCurrBus = 0;

    int nTrainTimeInMinutes = convertTimeInMinutes(strTrainTime);

    while (oBusTimes >> strCurrTime)
    {
        nCurrBus++;

        int nCurrTimeInMinutes = convertTimeInMinutes(strCurrTime);

        if (nTrainTimeInMinutes < nCurrTimeInMinutes)
            nTrainTimeInMinutes += 1440;

        int nCurrWaiting = nTrainTimeInMinutes - nCurrTimeInMinutes;

        if (nCurrWaiting < nShortestWaiting)
        {
            nShortestWaiting = nCurrWaiting;
            nBestBus = nCurrBus;
        }
    }

    cout << nBestBus << endl;

    return 0;
}
