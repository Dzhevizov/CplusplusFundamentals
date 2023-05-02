#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string strInput, strFind, strReplace;
    getline(cin, strInput);
    cin >> strFind;
    cin >> strReplace;

    istringstream oStream(strInput);
    ostringstream oOutput;
    string strWord;

    while (oStream >> strWord)
    {
        int nIndex = strWord.find(strFind);
        if (nIndex != -1)
            strWord.replace(nIndex, strFind.length(), strReplace);

        oOutput << strWord << " ";
    }

    cout << oOutput.str() << endl;
    
    return 0;
}

