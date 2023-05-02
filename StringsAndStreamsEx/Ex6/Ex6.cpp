#include <iostream>
#include <string>
#include <limits.h>
#include <sstream>
using namespace std;

int main()
{
	string strInput;
	getline(cin, strInput);
	istringstream oStream(strInput);

	string strCurrentWord;
	int nMaxInt = INT_MIN;

	while (oStream >> strCurrentWord)
	{
		stringstream oCurrNumber;
		string strCurrNumber;
		int nCurrNumber;

		for (int i = 0; i < strCurrentWord.length(); i++)
		{
			if (strCurrentWord[i] >= '0' && strCurrentWord[i] <= '9')
			{
				oCurrNumber << strCurrentWord[i];
			}
		}

		oCurrNumber >> strCurrNumber;
		nCurrNumber = stoi(strCurrNumber);

		if (nCurrNumber > nMaxInt)
			nMaxInt = nCurrNumber;
	}

	cout << nMaxInt << endl;

    return 0;
}
