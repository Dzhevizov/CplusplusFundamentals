#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;


void generateInputString(string& strInput)
{
    char chSymbol;

    srand(time(0));

    do
    {
        chSymbol = rand() % 127;

        if (chSymbol < '!')
            continue;

        strInput += chSymbol;

    } while (chSymbol != '.');
}


void findNumberString(const string& strInput, string& strNumber)
{
    for (int i = 0; i < strInput.length(); i++)
    {
        if (strInput[i] < '0' || strInput[i] > '9')
            continue;

        strNumber += strInput[i];
    }
}


int main()
{
    string strInput, strNumber;

    while (strNumber.length() == 0 || strNumber.length() >= 10)
    {
        strInput = "";
        strNumber = "";

        generateInputString(strInput);

        findNumberString(strInput, strNumber);
    }

    cout << strInput << endl;

    unsigned long lNumber = stoi(strNumber);
    double dRoot = sqrt(lNumber);

    cout << dRoot << endl;

    return 0;
}
