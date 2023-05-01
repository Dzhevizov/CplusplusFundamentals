#include <iostream>
#include <string>
using namespace std;

int main()
{
    string strNumber;
    cin >> strNumber;

    size_t Length;
    int nNumber = stoi(strNumber);
    if (nNumber >= 0)
        Length = strNumber.length();
    else
        Length = strNumber.length() - 1;
    

    int nEvenSum = 0, nOddSum = 0;

    if (nNumber >= 0)
    {
        for (int i = 0; i < Length; i++)
        {
            int nNum = strNumber.at(i) - 48;

            if (nNum % 2 == 0)
                nEvenSum += nNum;
            else
                nOddSum += nNum;
        }
    }
    
    else
    {
        for (int i = 1; i <= Length; i++)
        {
            int nNum = strNumber.at(i) - 48;

            if (nNum % 2 == 0)
                nEvenSum += nNum;
            else
                nOddSum += nNum;
        }
    }

    cout << nEvenSum * nOddSum << endl;

    return 0;
}
