#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	string strInput;
	getline(cin, strInput);
	istringstream oStream(strInput);
	ostringstream oOutput;

	string strCurrentWord;
	int nSum = 0;

	while (oStream >> strCurrentWord)
	{
		bool isNumber = true;

		for (int i = 0; i < strCurrentWord.length(); i++)
		{
			if ((strCurrentWord[i] < '0' || strCurrentWord[i] > '9') && strCurrentWord[i] != '-')
			{
				isNumber = false;
				oOutput << strCurrentWord << " ";
				break;
			}
		}

		if (isNumber)
			nSum += stoi(strCurrentWord);
	}

	cout << nSum << endl;
	cout << oOutput.str() << endl;

    return 0;
}
