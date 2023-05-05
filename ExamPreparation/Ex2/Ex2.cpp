#include <iostream>
#include <string>

using namespace std;

int main()
{
    string strInput, strOutput;
    cin >> strInput;

    int nRepeatTimes = 0;
    string strRepetition;

    for (size_t i = 0; i < strInput.length(); i++)
    {
        if (strInput[i] >= '0' && strInput[i] <= '9')
        {
            strRepetition += strInput[i];
            continue;
        }

        if (strRepetition.length() == 0)
        {
            strOutput += strInput[i];
            continue;
        }

        nRepeatTimes = (stoi)(strRepetition);
        for (int j = 0; j < nRepeatTimes; j++)
        {
            strOutput += strInput[i];
        }

        nRepeatTimes = 0;
        strRepetition = "";
    }

    cout << strOutput << endl;

    return 0;
}
