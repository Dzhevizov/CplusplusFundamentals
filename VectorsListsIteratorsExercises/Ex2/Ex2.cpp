#include <iostream>
#include <string>
using namespace std;

int main()
{
    string strInput;
    getline(cin, strInput);

    int nSmallBracketsCounter = 0, nMiddleBracketsCounter = 0, nLargeBracketsCounter = 0;
    bool isValid = true;

    for (size_t i = 0; i < strInput.length(); i++)
    {
        char chCurrBracket = strInput[i];

        if (chCurrBracket == '{')
        {
            if (nSmallBracketsCounter > 0 || nMiddleBracketsCounter > 0)
            {
                isValid = false;
                break;
            }
            else
            {
                nLargeBracketsCounter++;
            }
        }

        else if (chCurrBracket == '}')
        {
            if (nSmallBracketsCounter > 0 || nMiddleBracketsCounter > 0)
            {
                isValid = false;
                break;
            }
            else
            {
                nLargeBracketsCounter--;
            }
        }

        else if (chCurrBracket == '[')
        {
            if (nSmallBracketsCounter > 0)
            {
                isValid = false;
                break;
            }
            else
            {
                nMiddleBracketsCounter++;
            }
        }

        else if (chCurrBracket == ']')
        {
            if (nSmallBracketsCounter > 0)
            {
                isValid = false;
                break;
            }
            else
            {
                nMiddleBracketsCounter--;
            }
        }

        else if (chCurrBracket == '(')
        {
            nSmallBracketsCounter++;
        }

        else if (chCurrBracket == ')')
        {
            nSmallBracketsCounter--;
        }

        if (nSmallBracketsCounter < 0 || nMiddleBracketsCounter < 0 || nLargeBracketsCounter < 0)
        {
            isValid = false;
            break;
        }
    }

    if (nSmallBracketsCounter || nMiddleBracketsCounter || nLargeBracketsCounter > 0)
    {
        isValid = false;
    }

    if (isValid)
        cout << "valid" << endl;
    else
        cout << "invalid" << endl;

    return 0;
}
