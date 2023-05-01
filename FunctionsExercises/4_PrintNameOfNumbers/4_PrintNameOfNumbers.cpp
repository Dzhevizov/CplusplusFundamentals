#include <iostream>
#include <string>
using namespace std;

void PrintNumberName(int nNum)
{
    switch (nNum)
    {
    case 1: cout << "one" << " "; break;
    case 2: cout << "two" << " "; break;
    case 3: cout << "three" << " "; break;
    case 4: cout << "four" << " "; break;
    case 5: cout << "five" << " "; break;
    case 6: cout << "six" << " "; break;
    case 7: cout << "seven" << " "; break;
    case 8: cout << "eight" << " "; break;
    case 9: cout << "nine" << " "; break;
    }
}

void PrintNumberName10to19(int nNum)
{
    switch (nNum)
    {
    case 0: cout << "ten" << " "; break;
    case 1: cout << "eleven" << " "; break;
    case 2: cout << "twelve" << " "; break;
    case 3: cout << "thirteen" << " "; break;
    case 4: cout << "fourteen" << " "; break;
    case 5: cout << "fifteen" << " "; break;
    case 6: cout << "sixteen" << " "; break;
    case 7: cout << "seventeen" << " "; break;
    case 8: cout << "eighteen" << " "; break;
    case 9: cout << "nineteen" << " "; break;
    }
}

void PrintNumberName20to90(int nNum)
{
    switch (nNum)
    {
    case 2: cout << "twenty" << " "; break;
    case 3: cout << "thirty" << " "; break;
    case 4: cout << "fourty" << " "; break;
    case 5: cout << "fifty" << " "; break;
    case 6: cout << "sixty" << " "; break;
    case 7: cout << "seventy" << " "; break;
    case 8: cout << "eighty" << " "; break;
    case 9: cout << "ninety" << " "; break;
    }
}

void PrintDecimalDigitName(int nNum2, int nNum1)
{
    if (nNum2 == 1)
        PrintNumberName10to19(nNum1);
    else
    {
        PrintNumberName20to90(nNum2);
        PrintNumberName(nNum1);
    }
}


int main()
{
    int nNumber;
    cin >> nNumber;

    int nNum1 = 0, nNum2 = 0, nNum3 = 0, nNum4 = 0;
    if (nNumber == 0)
    {
        cout << "zero" << endl;
        return 0;
    }
    
    if (nNumber > 1000)
    {
        nNum4 = nNumber / 1000;
        nNumber %= 1000;

        PrintNumberName(nNum4);
        cout << "thousand" << " ";
    }

    if (nNumber > 100)
    {
        nNum3 = nNumber / 100;
        nNumber %= 100;

        PrintNumberName(nNum3);
        cout << "hundred" << " ";
    }

    if (nNumber >= 10)
    {
        nNum2 = nNumber / 10;
        nNum1 = nNumber % 10;
        PrintDecimalDigitName(nNum2, nNum1);
    }

    else 
        PrintNumberName(nNumber);
    
    return 0;
}
