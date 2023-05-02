#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
using namespace std;

int main()
{
	string strInput;
	getline(cin, strInput);
	istringstream oStream(strInput);
	ostringstream oOutput;

	string strCurrentWord;

	while (oStream >> strCurrentWord)
	{
		strCurrentWord[0] = toupper(strCurrentWord[0]);

		bool isNotLetter = false;
		
		for (int i = 0; i < strCurrentWord.length(); i++)
		{
			if (!((strCurrentWord[i] >= 'a' && strCurrentWord[i] <= 'z') || (strCurrentWord[i] >= 'A' && strCurrentWord[i] <= 'Z')))
			{
				isNotLetter = true;
			}
			else
			{
				if (isNotLetter)
				{
					strCurrentWord[i] = toupper(strCurrentWord[i]);
					isNotLetter = false;
				}
			}
		}

		oOutput << strCurrentWord << " ";
	}

	cout << oOutput.str() << endl;

    return 0;
}
