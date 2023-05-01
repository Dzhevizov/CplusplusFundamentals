#include <iostream>
#include <climits>
using namespace std;

int main()
{
    size_t nIntegersCount;
    cin >> nIntegersCount;

    int nMinInt = INT_MAX, nMaxInt = INT_MIN;

    for (int i = 1; i <= nIntegersCount; i++)
    {
        int nCurrentInteger;
        cin >> nCurrentInteger;

        if (nCurrentInteger < nMinInt)
            nMinInt = nCurrentInteger;

        if (nCurrentInteger > nMaxInt)
            nMaxInt = nCurrentInteger;
    }

    cout << nMinInt << ' ' << nMaxInt << endl;

    return 0;
}
