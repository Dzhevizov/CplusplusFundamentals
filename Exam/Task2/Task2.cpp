#include <iostream>
#include <string>

using namespace std;

int main()
{
    string strInput;
    getline(cin, strInput);

    string strMagicItems = "aeiou";

    char chPreviousItem = ' ';

    for (size_t i = 0; i < strInput.length(); i++)
    {
        if (strInput[i] != chPreviousItem)
        {
            chPreviousItem = strInput[i];
            cout << strInput[i];
            continue;
        }

        for (size_t j = 0; j < strMagicItems.length(); j++)
        {
            if (strMagicItems[j] == strInput[i])
            {
                cout << strInput[i];
                break;
            }
        }
    }

    cout << endl;

    return 0;
}
