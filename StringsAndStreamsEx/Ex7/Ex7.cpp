#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	string strInput;
	getline(cin, strInput);
	istringstream oStream(strInput);

	string strCurrentWord;
	string strMaxLengthNoise = "";

	while (oStream >> strCurrentWord)
	{
		stringstream oCurrNoise;
		string strCurrNoise;

		for (int i = 0; i < strCurrentWord.length(); i++)
		{
			if (strCurrentWord[i] < '0' || strCurrentWord[i] > '9')
			{
				oCurrNoise << strCurrentWord[i];
			}
		}

		oCurrNoise >> strCurrNoise;
		if (strCurrNoise.length() > strMaxLengthNoise.length())
		{
			strMaxLengthNoise = strCurrNoise;
		}

		if (strCurrNoise.length() == strMaxLengthNoise.length() && strCurrNoise < strMaxLengthNoise)
		{
			strMaxLengthNoise = strCurrNoise;
		}
	}

	if (strMaxLengthNoise.length() == 0)
		cout << "no noise" << endl;
	else
		cout << strMaxLengthNoise << endl;

    return 0;
}
