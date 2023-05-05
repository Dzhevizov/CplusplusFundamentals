#include <iostream>
#include <string>

using namespace std;

int main()
{
    string strInput;
    cin >> strInput;

    for (char i = 'a'; i <= 'z'; i++)
    {
        bool isFound = false;

        for (size_t j = 0; j < strInput.length(); j++)
        {
            if (i == strInput[j])
            {
                isFound = true;
                break;
            }
        }

        if (!isFound)
        {
            cout << i;
        }
    }

    cout << endl;

    return 0;
}
