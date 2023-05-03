#include <iostream>
#include <string>
#include <sstream>
#include <list>
using namespace std;

void initList(istringstream& oStream, list <int>& oList)
{
    int nNumber;
    while (oStream >> nNumber)
        oList.push_back(nNumber);
}

int main()
{
    string strTrackA, strTrackB;
    getline(cin, strTrackA);
    getline(cin, strTrackB);

    istringstream oTrackA(strTrackA);
    istringstream oTrackB(strTrackB);

    list <int> listTrackA;
    list <int> listTrackB;

    initList(oTrackA, listTrackA);
    initList(oTrackB, listTrackB);

    list <char> listOrder;
    list <int> listSingleTrack;

    while (listTrackA.size() != 0 || listTrackB.size() != 0)
    {
        if (listTrackA.size() == 0) 
        {
            list <int>::iterator i = listTrackB.end();
            i--;
            int nCurrRailCar = *i;
            listOrder.push_back('B');
            listSingleTrack.push_front(nCurrRailCar);
            listTrackB.erase(i);
            continue;
        }

        if (listTrackB.size() == 0)
        {
            list <int>::iterator i = listTrackA.end();
            i--;
            int nCurrRailCar = *i;
            listOrder.push_back('A');
            listSingleTrack.push_front(nCurrRailCar);
            listTrackA.erase(i);
            continue;
        }

        list <int>::iterator iA = listTrackA.end();
        list <int>::iterator iB = listTrackB.end();

        iA--;
        iB--;

        int nRailCarA, nRailCarB;

        nRailCarA = *iA;
        nRailCarB = *iB;

        if (nRailCarA < nRailCarB)
        {
            listOrder.push_back('A');
            listSingleTrack.push_front(nRailCarA);
            listTrackA.erase(iA);
        }

        else
        {
            listOrder.push_back('B');
            listSingleTrack.push_front(nRailCarB);
            listTrackB.erase(iB);
        }
    }

    for (list <char>::iterator i = listOrder.begin(); i != listOrder.end(); i++)
        cout << *i;
    cout << endl;

    for (list <int>::iterator i = listSingleTrack.begin(); i != listSingleTrack.end(); i++)
        cout << *i << " ";
    cout << endl;

    return 0;
}
